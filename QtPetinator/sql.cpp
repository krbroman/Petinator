#include "sql.h"
#include <QDir>

Sql::Sql()
{
    QDir dir;
    Db = QSqlDatabase::addDatabase("QSQLITE");

    //Путь для Ромы Голубева
    Db.setDatabaseName("/Users/romabruks/Documents/Github/Study/Petinator/QtPetinator/Petinator.db");

    //Путь для Кирилла
    //Db.setDatabaseName("E:/Petinator/QtPetinator/Petinator.db");
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
