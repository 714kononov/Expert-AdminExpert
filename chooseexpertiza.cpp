#include "chooseexpertiza.h"
#include "ui_chooseexpertiza.h"
#include <car.h>
#include <shoes.h>
#include <clothes.h>
#include <HouseholdAppliances.h>
#include <build.h>
#include <window.h>
#include <HouseholdAppliances.h>
#include <QFile>
#include <QTextStream>

int chooseexpertizaZnac = 0;

ChooseExpertiza::ChooseExpertiza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseExpertiza)
{
    ui->setupUi(this);
    setWindowTitle("Выбор экспертизы");
}

ChooseExpertiza::~ChooseExpertiza()
{
    delete ui;
}


void ChooseExpertiza::on_pushButton_clicked()
{
    close();
    chooseexpertizaZnac = 1;
    photovideo = new PhotoVideo;
    photovideo->show();
}


void ChooseExpertiza::on_pushButton_3_clicked()
{
    close();
    chooseexpertizaZnac = 2;
    photovideo = new PhotoVideo;
    photovideo->show();
}


void ChooseExpertiza::on_pushButton_5_clicked()
{
    close();
    chooseexpertizaZnac = 3;
    photovideo = new PhotoVideo;
    photovideo->show();
}


void ChooseExpertiza::on_pushButton_2_clicked()
{
    close();
    chooseexpertizaZnac = 4;
    photovideo = new PhotoVideo;
    photovideo->show();
}


void ChooseExpertiza::on_pushButton_4_clicked()
{
    close();
    chooseexpertizaZnac = 5;
    photovideo = new PhotoVideo;
    photovideo->show();
}


void ChooseExpertiza::on_pushButton_6_clicked()
{
    close();
    chooseexpertizaZnac = 6;
    emit ChooseExpertizaChange(chooseexpertizaZnac);
    photovideo = new PhotoVideo();
    photovideo->show();
}

