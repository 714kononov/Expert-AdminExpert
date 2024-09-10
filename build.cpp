#include "build.h"
#include "ui_build.h"
#include <QFileDialog>
#include <abouttovar.h>

Build::Build(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Build)
{
    ui->setupUi(this);
}

Build::~Build()
{
    delete ui;
}

void Build::on_pushButton_2_clicked()
{
    close();
    abouttovar = new AboutTovar;
    abouttovar->show();

}


void Build::on_pushButton_3_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Выберите фото", "", "Images (*.png *.jpg *.bmp)");
    if (!filePath.isEmpty()) {
        // Скрыть кнопку после выбора файла
        ui->pushButton_3->setVisible(false);

        // Отобразить изображение в QLabel
        QPixmap image(filePath);
        ui->label_2->setPixmap(image);
        ui->label_2->setScaledContents(true);

        // Определить путь для сохранения файла
        QString destinationPath = "/Users/admin/Expert/Photo" + QFileInfo(filePath).fileName();

        // Скопировать файл в новый путь
        QFile::copy(filePath, destinationPath);

        }
}


void Build::on_pushButton_5_clicked()
{
        QString filePath = QFileDialog::getOpenFileName(this, "Выберите фото", "", "Images (*.png *.jpg *.bmp)");
        if (!filePath.isEmpty()) {
        // Скрыть кнопку после выбора файла
        ui->pushButton_5->setVisible(false);

        // Отобразить изображение в QLabel
        QPixmap image(filePath);
        ui->label_3->setPixmap(image);
        ui->label_3->setScaledContents(true);

        // Определить путь для сохранения файла
        QString destinationPath = "/Users/admin/Expert/Photo" + QFileInfo(filePath).fileName();

        // Скопировать файл в новый путь
        QFile::copy(filePath, destinationPath);

        }
}


void Build::on_pushButton_6_clicked()
{
        QString filePath = QFileDialog::getOpenFileName(this, "Выберите фото", "", "Images (*.png *.jpg *.bmp)");
        if (!filePath.isEmpty()) {
        // Скрыть кнопку после выбора файла
        ui->pushButton_6->setVisible(false);

        // Отобразить изображение в QLabel
        QPixmap image(filePath);
        ui->label_4->setPixmap(image);
        ui->label_4->setScaledContents(true);

        // Определить путь для сохранения файла
        QString destinationPath = "/Users/admin/Expert/Photo" + QFileInfo(filePath).fileName();

        // Скопировать файл в новый путь
        QFile::copy(filePath, destinationPath);

        }

}


void Build::on_pushButton_4_clicked()
{
        QString filePath = QFileDialog::getOpenFileName(this, "Выберите фото", "", "Images (*.png *.jpg *.bmp)");
        if (!filePath.isEmpty()) {
        // Скрыть кнопку после выбора файла
        ui->pushButton_4->setVisible(false);

        // Отобразить изображение в QLabel
        QPixmap image(filePath);
        ui->label_5->setPixmap(image);
        ui->label_5->setScaledContents(true);

        // Определить путь для сохранения файла
        QString destinationPath = "/Users/admin/Expert/Photo" + QFileInfo(filePath).fileName();

        // Скопировать файл в новый путь
        QFile::copy(filePath, destinationPath);

        }
}

