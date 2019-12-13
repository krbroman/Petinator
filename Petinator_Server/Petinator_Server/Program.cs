using System;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Xml.Serialization;
using System.Diagnostics;
using System.Threading;

public class Petinator_Server
{
    // Информация о файле 
    [Serializable]
    public class FileDetails
    {
        public string FILETYPE = "";
        public long FILESIZE = 0;
    }

    private static FileDetails fileDet = new FileDetails();

    // Поля, связанные с UdpClient
    private static IPAddress remoteIPAddress;
    private const int remotePort = 5002;
    private static UdpClient sender;
    private static IPEndPoint endPoint;
    private static Byte[] receiveBytes = new Byte[0];

    
    private static FileStream fs;

    [STAThread]
    static void Main(string[] args)
    {
        try
        {

            // Получаем удаленный IP-адрес и создаем IPEndPoint
            Console.WriteLine("Введите удаленный IP-адрес");
            remoteIPAddress = IPAddress.Parse("127.0.0.1");
            endPoint = new IPEndPoint(remoteIPAddress, remotePort);
            Socket sListener = new Socket(endPoint.AddressFamily, SocketType.Stream, ProtocolType.Tcp);

            try
            {
                sListener.Bind(endPoint);
                sListener.Listen(10);

                // Начинаем слушать соединения
                while (true)
                {
                    sender = new UdpClient();
                    Console.WriteLine("Ожидаем соединение через порт {0}", endPoint);

                    // Программа приостанавливается, ожидая входящее соединение
                    Socket handler = sListener.Accept();
                    string data = null;
                    string interaction = null;
                    // Мы дождались клиента, пытающегося с нами соединиться

                    byte[] bytes = new byte[1024];
                    int bytesRec = handler.Receive(bytes);
                    interaction += Encoding.UTF8.GetString(bytes, 0, bytesRec);

                    bytesRec = handler.Receive(bytes);
                    data += Encoding.UTF8.GetString(bytes, 0, bytesRec);
                    data = Path.GetFullPath(@data);
                    // Показываем данные на консоли
                    Console.Write("Полученный текст: " + data + "\n\n");

                    // Отправляем ответ клиенту
                    string reply = "Спасибо за запрос в " + data.Length.ToString()
                            + " символов";
                    byte[] msg = Encoding.UTF8.GetBytes(reply);
                    handler.Send(msg);

                    // Получаем путь файла и его размер 
                    Console.WriteLine("Введите путь к файлу и его имя");
                    


                    if(interaction == "Get")
                    {
                        fs = new FileStream(data, FileMode.Open, FileAccess.Read);
                        // Отправляем информацию о файле
                        SendFileInfo();

                        // Ждем 2 секунды
                        Thread.Sleep(2000);

                        // Отправляем сам файл
                        SendFile();
                    }
                    else if(interaction == "Upload")
                    {
                        fs = new FileStream(data, FileMode.Open, FileAccess.Write);
                        GetFileDetails(handler);
                        ReceiveFile(handler);
                    }

                    

                    handler.Shutdown(SocketShutdown.Both);
                    handler.Close();

                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.ToString());
            }


        }
        catch (Exception eR)
        {
            Console.WriteLine(eR.ToString());
        }
    }

    public static void SendFileInfo()
    {

        // Получаем тип и расширение файла
        if(fs.Name[fs.Name.Length - 3] != '.')
            fileDet.FILETYPE = fs.Name.Substring((int)fs.Name.Length - 3, 3);
        else fileDet.FILETYPE = fs.Name.Substring((int)fs.Name.Length - 2, 2);

        // Получаем длину файла
        fileDet.FILESIZE = fs.Length;

        XmlSerializer fileSerializer = new XmlSerializer(typeof(FileDetails));
        MemoryStream stream = new MemoryStream();

        // Сериализуем объект
        fileSerializer.Serialize(stream, fileDet);

        // Считываем поток в байты
        stream.Position = 0;
        Byte[] bytes = new Byte[stream.Length];
        stream.Read(bytes, 0, Convert.ToInt32(stream.Length));

        Console.WriteLine("Отправка деталей файла...");

        // Отправляем информацию о файле
        sender.Send(bytes, bytes.Length, endPoint);
        stream.Close();

    }

    private static void SendFile()
    {
        // Создаем файловый поток и переводим его в байты
        Console.WriteLine("Отправка файла размером " + fs.Length + " байт");
        long delta = fs.Length;



        try
        {
            // Отправляем файл
            for (int i = 0; delta > 0; ++i)
            {
                delta -= 8192;
                Byte[] bytes;
                if (delta > 0)
                {
                    bytes = new Byte[8192];
                    fs.Read(bytes, 0, bytes.Length);
                }
                else
                {
                    int temp = (int)delta + 8192;
                    bytes = new Byte[8192];
                    fs.Read(bytes, 0, bytes.Length);
                }

                sender.Send(bytes, bytes.Length, endPoint);
            }

        }
        catch (Exception eR)
        {
            Console.WriteLine(eR.ToString());
        }
        finally
        {
            // Закрываем соединение и очищаем поток
            fs.Close();
            sender.Close();
        }
    
        Console.WriteLine("Файл успешно отправлен.");
    }



    private static void GetFileDetails(Socket handler)
    {
        try
        {
            Console.WriteLine("-----------*******Ожидание информации о файле*******-----------");

            // Получаем информацию о файле
            Byte[] bytes = new Byte[1024];
            handler.Receive(bytes);
            Console.WriteLine("----Информация о файле получена!");

            XmlSerializer fileSerializer = new XmlSerializer(typeof(FileDetails));
            MemoryStream stream1 = new MemoryStream();

            // Считываем информацию о файле
            stream1.Write(bytes, 0, bytes.Length);
            stream1.Position = 0;

            // Вызываем метод Deserialize
            fileDet = (FileDetails)fileSerializer.Deserialize(stream1);
            Console.WriteLine("Получен файл типа ." + fileDet.FILETYPE +
                " имеющий размер " + fileDet.FILESIZE.ToString() + " байт");
        }
        catch (Exception eR)
        {
            Console.WriteLine(eR.ToString());
        }
    }

    public static void ReceiveFile(Socket handler)
    {
        try
        {
            Console.WriteLine("-----------*******Ожидайте получение файла*******-----------");

            // Получаем файл
            long delta = fileDet.FILESIZE;
            Byte[] receivedFileBytes = new Byte[delta];
            for (int i = 0; delta > 0; ++i)
            {
                delta -= 8192;
                if (delta > 0)
                {
                    Byte[] bytes = new Byte[8192];
                    handler.Receive(bytes);
                    bytes.CopyTo(receivedFileBytes, i * 8192);
                }
                else
                {
                    int temp = (int)delta + 8192;
                    Byte[] bytes = new Byte[temp];
                    Byte[] tempBytes = new Byte[8192];
                    handler.Receive(bytes);
                    Array.Resize(ref bytes, temp);
                    bytes.CopyTo(receivedFileBytes, i * 8192);

                }
            }

            // Преобразуем и отображаем данные
            Console.WriteLine("----Файл получен...Сохраняем...");

            
            
            fs.Write(receivedFileBytes, 0, receivedFileBytes.Length);

            Console.WriteLine("----Файл сохранен...");

        }
        catch (Exception eR)
        {
            Console.WriteLine(eR.ToString());
        }
        finally
        {
            fs.Close();
            sender.Close();
        }
    }
}