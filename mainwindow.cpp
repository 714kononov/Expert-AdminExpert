#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "chooseexpertiza.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Главная");


}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}


void MainWindow::on_pushButton_clicked()
{
    close();
    chooseexpertiza = new ChooseExpertiza;
    chooseexpertiza->show();

}

