#ifndef SHOES_H
#define SHOES_H

#include <QDialog>
#include <abouttovar.h>
namespace Ui {
class Shoes;
}

class Shoes : public QDialog
{
    Q_OBJECT

public:
    explicit Shoes(QWidget *parent = nullptr);
    ~Shoes();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Shoes *ui;
    AboutTovar *abouttovar;
};

#endif // SHOES_H
