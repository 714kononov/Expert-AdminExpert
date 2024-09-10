// abouttovar.cpp
#include "abouttovar.h"
#include "ui_abouttovar.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

AboutTovar::AboutTovar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutTovar),
    contacts(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("Описание товара");
    ui->plainTextEdit->setPlainText("Здесь вам необходимо описать ваш товар и что произошло");
}

AboutTovar::~AboutTovar()
{
    delete ui;
    delete contacts;
}

void AboutTovar::on_pushButton_clicked()
{
    close();
    emit aboutTovarChange(desc.aboutTovar);
    contacts = new Contacts(desc.aboutTovar);
    contacts->show();
}

void AboutTovar::on_plainTextEdit_textChanged()
{
    desc.aboutTovar = ui->plainTextEdit->toPlainText();
}
