using System;
using System.IO;
using System.Net;
using System.Diagnostics;
using System.Net.Sockets;
using System.Text;
using System.Xml.Serialization;

public class Petinator_Sever_Client
{
    // Детали файла
    [Serializable]
    public class FileDetails
    {
        public string FILETYPE = "";
        public long FILESIZE = 0;
    }

    private static FileDetails fileDet;

    // Поля, связанные с UdpClient
    private static int localPort = 5002;
    private static UdpClient receivingUdpClient = new UdpClient(localPort);
    private static IPEndPoint RemoteIpEndPoint = null;

    private static FileStream fs;
    private static Byte[] receiveBytes = new Byte[0];

    [STAThread]
    static void Main(string[] args)
    { 
        
            try
            {
                SendMessageFromSocket(localPort, args[1]);
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.ToString());
            }

        
        
    }

    static void SendMessageFromSocket(int port, string interaction)
    {
        // Буфер для входящих данных
        byte[] bytes = new byte[1024];

        // Соединяемся с удаленным устройством

        // Устанавливаем удаленную точку для сокета
        IPHostEntry ipHost = Dns.GetHostEntry("localhost");
        IPAddress ipAddr = IPAddress.Parse("127.0.0.1");
        IPEndPoint ipEndPoint = new IPEndPoint(ipAddr, port);

        Socket sender = new Socket(ipAddr.AddressFamily, SocketType.Stream, ProtocolType.Tcp);

        // Соединяем сокет с удаленной точкой
        sender.Connect(ipEndPoint);

        
        string message = "Petinator.db";


        Console.WriteLine("Сокет соединяется с {0} ", sender.RemoteEndPoint.ToString());
        byte[] msg = Encoding.UTF8.GetBytes(interaction);
        int bytesSent = sender.Send(msg);

        msg = Encoding.UTF8.GetBytes(message);

        // Отправляем данные через сокет
        bytesSent = sender.Send(msg);

        // Получаем ответ от сервера
        int bytesRec = sender.Receive(bytes);

        Console.WriteLine("\nОтвет от сервера: {0}\n\n", Encoding.UTF8.GetString(bytes, 0, bytesRec));

        

        if (interaction == "Get")
        {
            // Получаем информацию о файле
            GetFileDetails();

            // Получаем файл
            ReceiveFile();
        }
        else if (interaction == "Upload")
        {
            string data = Path.GetFullPath(@"Petinator.db");
            fs = new FileStream(@"Petinator.db", FileMode.Open, FileAccess.Read);

            SendFileInfo(sender);
            SendFile();
        }


        // Освобождаем сокет
        sender.Shutdown(SocketShutdown.Both);
        sender.Close();
    }

    private static void GetFileDetails()
    {
        try
        {
            Console.WriteLine("-----------*******Ожидание информации о файле*******-----------");

            // Получаем информацию о файле
            receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
            Console.WriteLine("----Информация о файле получена!");

            XmlSerializer fileSerializer = new XmlSerializer(typeof(FileDetails));
            MemoryStream stream1 = new MemoryStream();

            // Считываем информацию о файле
            stream1.Write(receiveBytes, 0, receiveBytes.Length);
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

    public static void ReceiveFile()
    {
        try
        {
            Console.WriteLine("-----------*******Ожидайте получение файла*******-----------");

            // Получаем файл
            long delta = fileDet.FILESIZE;
            Byte[] receivedFileBytes = new Byte[delta];
            for(int i = 0; delta > 0; ++i)
            {
                delta -= 8192;
                if (delta > 0)
                {
                    Byte[] bytes = new Byte[8192];
                    bytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    bytes.CopyTo(receivedFileBytes, i * 8192);
                }
                else
                {
                    int temp = (int)delta + 8192;
                    Byte[] bytes = new Byte[temp];
                    Byte[] tempBytes = new Byte[8192];
                    bytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    Array.Resize(ref bytes, temp);
                    bytes.CopyTo(receivedFileBytes, i * 8192);
                    
                }
            }

            // Преобразуем и отображаем данные
            Console.WriteLine("----Файл получен...Сохраняем...");

            // Создаем временный файл с полученным расширением
            fs = new FileStream("Petinator." + fileDet.FILETYPE, FileMode.Create, FileAccess.ReadWrite, FileShare.ReadWrite);
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
            receivingUdpClient.Close();
        }
    }



    public static void SendFileInfo(Socket sender)
    {

        // Получаем тип и расширение файла

        fileDet = new FileDetails();
        if (fs.Name[fs.Name.Length - 3] != '.')
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
        sender.Send(bytes);
        
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

                receivingUdpClient.Send(bytes, bytes.Length, RemoteIpEndPoint);
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
            receivingUdpClient.Close();
        }

        Console.WriteLine("Файл успешно отправлен.");
    }
}