#include "sql.h"

Sql::Sql()
{
    Db = QSqlDatabase::addDatabase("QSQLITE");
    Db.setDatabaseName("/Users/romabruks/Documents/Github/Study/Petinator/QtPetinator/Petinator.db");
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
