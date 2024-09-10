#ifndef CAR_H
#define CAR_H

#include <QDialog>
#include <abouttovar.h>


namespace Ui {
class Car;
}

class Car : public QDialog
{
    Q_OBJECT

public:
    explicit Car(QWidget *parent = nullptr);
    ~Car();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Car *ui;
    AboutTovar *abouttovar;

};

#endif // CAR_H
