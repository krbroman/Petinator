#ifndef SQL_H
#define SQL_H
#include <QtSql>
#include <QSqlQuery>


class Sql
{
public:
    Sql();
    QSqlQuery qu;
    QSqlDatabase Db;
    int column;
    int line;
};

#endif // SQL_H
