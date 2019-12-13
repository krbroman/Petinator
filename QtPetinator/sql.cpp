#include "sql.h"
#include <QDir>

Sql::Sql()
{
    QDir dir;
    Db = QSqlDatabase::addDatabase("QSQLITE");

    //Путь для Ромы Голубева
    //Db.setDatabaseName("/Users/romabruks/Documents/Github/Study/Petinator/QtPetinator/Petinator.db");

    //Путь для Кирилла
    //Db.setDatabaseName("E:/Petinator/QtPetinator/Petinator.db");

    //Путь для Юли
    //Db.setDatabaseName("/Users/juliachernykh/Documents/university/Programming languages/Petinator/QtPetinator/Petinator.db");

    //Путь для Ромы Курбатова
    Db.setDatabaseName("C:\\Games\\Petinator\\Petinator\\build-QtPetinator-Desktop_Qt_5_12_6_MSVC2017_32bit-Debug\\Petinator.db");

    if(Db.open())
    {
        qu = QSqlQuery(Db);
    }

    qu.exec("Select \"Index\" from Indexes where  \"Index\"=(select Max( \"Index\") from Indexes);");
    qu.next();
    column = qu.value(0).toInt()+1;

    qu.exec("Select ID from Questions where  ID =(select Max(ID) from Questions);");
    qu.next();
    line = qu.value(0).toInt()+1;

}
