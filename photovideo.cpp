#include "photovideo.h"
#include "ui_photovideo.h"
#include <QFileDialog>
#include <abouttovar.h>
#include <QDebug>
PhotoVideo::PhotoVideo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PhotoVideo)

{
    ui->setupUi(this);
    setWindowTitle("Фото/Видео");
}

PhotoVideo::~PhotoVideo()
{
    delete ui;
}

void PhotoVideo::on_pushButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Выберите фото или видео"), "", tr("Изображения и видео (*.png *.jpg *.jpeg *.bmp *.gif *.mp4 *.avi *.mov)"));

    // Проверяем, был ли выбран файл
    if (!filePath.isEmpty()) {
        ui->pushButton->setVisible(false);

        // Загружаем изображение
        QPixmap originalPixmap(filePath);

        // Устанавливаем максимальный размер изображения
        QSize maxSize(200, 200); // Укажите желаемый максимальный размер

        // Масштабируем изображение до заданного размера
        QPixmap scaledPixmap = originalPixmap.scaled(maxSize, Qt::KeepAspectRatio);

        // Устанавливаем масштабированное изображение в качестве источника для QLabel
        ui->label_2->setPixmap(scaledPixmap);

        qDebug() << "Фото 1 было добавлено";
    }
}

void PhotoVideo::on_pushButton_5_clicked()
{
    close();
    abouttovar = new AboutTovar;
    abouttovar->show();
}

void PhotoVideo::on_pushButton_2_clicked()
{
    QString filePath1 = QFileDialog::getOpenFileName(this, tr("Выберите фото или видео"), "", tr("Изображения и видео (*.png *.jpg *.jpeg *.bmp *.gif *.mp4 *.avi *.mov)"));

    // Проверяем, был ли выбран файл
    if (!filePath1.isEmpty()) {
        ui->pushButton_2->setVisible(false);

        // Загружаем изображение
        QPixmap originalPixmap(filePath1);
        QSize maxSize(200, 200);

        // Масштабируем изображение до заданного размера
        QPixmap scaledPixmap = originalPixmap.scaled(maxSize, Qt::KeepAspectRatio);

        // Устанавливаем масштабированное изображение в качестве источника для QLabel
        ui->label_3->setPixmap(scaledPixmap);

        qDebug()<<"Фото 2 было добавлено";
    }
}

void PhotoVideo::on_pushButton_3_clicked()
{
    QString filePath2 = QFileDialog::getOpenFileName(this, tr("Выберите фото или видео"), "", tr("Изображения и видео (*.png *.jpg *.jpeg *.bmp *.gif *.mp4 *.avi *.mov)"));

    // Проверяем, был ли выбран файл
    if (!filePath2.isEmpty()) {
        ui->pushButton_3->setVisible(false);

        // Загружаем изображение
        QPixmap originalPixmap(filePath2);
        QSize maxSize(200, 200);

        // Масштабируем изображение до заданного размера
        QPixmap scaledPixmap = originalPixmap.scaled(maxSize, Qt::KeepAspectRatio);

        // Устанавливаем масштабированное изображение в качестве источника для QLabel
        ui->label_5->setPixmap(scaledPixmap);

        qDebug()<<"Фото 3 было добавлено";
    }
}

void PhotoVideo::on_pushButton_4_clicked()
{
    QString filePath3 = QFileDialog::getOpenFileName(this, tr("Выберите фото или видео"), "", tr("Изображения и видео (*.png *.jpg *.jpeg *.bmp *.gif *.mp4 *.avi *.mov)"));

    // Проверяем, был ли выбран файл
    if (!filePath3.isEmpty()) {
        ui->pushButton_4->setVisible(false);

        // Загружаем изображение
        QPixmap originalPixmap(filePath3);
        QSize maxSize(200, 200);

        // Масштабируем изображение до заданного размера
        QPixmap scaledPixmap = originalPixmap.scaled(maxSize, Qt::KeepAspectRatio);

        // Устанавливаем масштабированное изображение в качестве источника для QLabel
        ui->label_4->setPixmap(scaledPixmap);

        qDebug()<<"Фото 4 было добавлено";
    }
}

