#include "database.h"

database::database()
{

}

void database::createDatabaseAndTable() {

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/admin/Expert/expert.sqlite");

    if (db.open()) {
        qDebug() << "Connected to SQLite database";

        QSqlQuery query;
        if (query.exec("CREATE TABLE IF NOT EXISTS expert ("
                       "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                       "datetime DATETIME,"
                       "chooseexpertiza INTEGER,"
                       "fio TEXT,"
                       "email TEXT,"
                       "phone TEXT,"
                       "description TEXT,"
                       "photo BLOB,"
                       "photosec BLOB,"
                       "photothird BLOB,"
                       "photofour BLOB)")) {
            qDebug() << "Table created successfully";
        } else {
            qDebug() << "Error creating table: " << query.lastError().text();
        }

        db.close();
    } else {
        qDebug() << "Error: " << db.lastError().text();
    }
}

// В классе database добавьте следующую функцию
void database::insertData(const QString& datetime, const QString& fio, const QString& email, const QString& phone, const QString& description, const QByteArray& photo)
{
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);

    query.prepare("INSERT INTO expert (datetime, fio, email, phone, description, photo) VALUES (:datetime, :fio, :email, :phone, :description, :photo)");
    query.bindValue(":datetime", datetime);
    query.bindValue(":fio", fio);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);
    query.bindValue(":description", description);
    query.bindValue(":photo", photo);

    if (query.exec()) {
        qDebug() << "Data inserted successfully";
    } else {
        qDebug() << "Error inserting data: " << query.lastError().text();
    }
}



