// finishuser.cpp
#include "ui_finishuser.h"
#include "finishuser.h"
#include "database.h"
#include "contacts.h"
#include "abouttovar.h"
#include <QDateTime>
#include <QByteArray>
#include <QDebug>

FinishUser::FinishUser(const QString &FIO, const QString &phone, const QString &mail,const QString &aboutTovar, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinishUser),
    contacts(new UserContacts),
    aboutTovar(aboutTovar)
{
    ui->setupUi(this);
    setWindowTitle("Успешно");
    contacts->FIO = FIO;
    contacts->MAIl = mail;
    contacts->Phone = phone;

}

FinishUser::~FinishUser()
{
    delete ui;
    delete contacts;
}

void FinishUser::on_pushButton_2_clicked()
{
    database myDatabase;

    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString datetime = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    QString FIO = contacts->FIO;
    QString phone = contacts->Phone;
    QString mail = contacts->MAIl;
    QString desc = aboutTovar;
    QByteArray photo;

    qDebug() << "Before save to DB:";
    qDebug() << "FIO" << FIO;
    qDebug() << "phone" << phone;
    qDebug() << "mail" << mail;
    qDebug() << "descrip" << desc;

    myDatabase.insertData(datetime, FIO, phone, mail, desc, photo);

    close();
}



