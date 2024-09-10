#include "mainwindow.h"

#include <QApplication>
#include <database.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    database dbObject;
    dbObject.createDatabaseAndTable();
    return a.exec();
}
