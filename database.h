#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

class database
{
public:
    database();
    void createDatabaseAndTable();
public:
    void insertData(const QString& datetime, const QString& fio, const QString& email, const QString& phone, const QString& description, const QByteArray& photo);

};

#endif // DATABASE_H
