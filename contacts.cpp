// contacts.cpp
#include "contacts.h"
#include "ui_contacts.h"
#include <QDebug>

Contacts::Contacts(const QString &aboutTovar, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Contacts),
    finishuser(nullptr),
    aboutTovar(aboutTovar)
{
    ui->setupUi(this);
    setWindowTitle("Контактные данные");
}

Contacts::~Contacts()
{
    delete ui;
    delete finishuser;
}

void Contacts::on_pushButton_clicked()
{
    emit contactInfoChanged(contacts.FIO, contacts.Phone, contacts.MAIl,aboutTovar);
    close();
    // Передаем данные в конструктор FinishUser
    finishuser = new FinishUser(contacts.FIO, contacts.Phone, contacts.MAIl,aboutTovar, this);
    finishuser->show();

    qDebug() << "desc: " << aboutTovar;
    qDebug()<<"FIO: "<<contacts.FIO;
    qDebug()<<"PHONE: "<<contacts.Phone;
    qDebug()<<"MAIL: "<<contacts.MAIl;
}

void Contacts::on_plainTextEdit_textChanged()
{
    contacts.FIO = ui->plainTextEdit->toPlainText();
}

void Contacts::on_plainTextEdit_2_textChanged()
{
    contacts.Phone = ui->plainTextEdit_2->toPlainText();
}

void Contacts::on_plainTextEdit_3_textChanged()
{
    contacts.MAIl = ui->plainTextEdit_3->toPlainText();
}

void Contacts::handleAboutTovarContacts(const QString &aboutTovar)
{
    this->aboutTovar = aboutTovar;
}
