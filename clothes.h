#ifndef CLOTHES_H
#define CLOTHES_H

#include <QDialog>
#include <abouttovar.h>

namespace Ui {
class Clothes;
}

class Clothes : public QDialog
{
    Q_OBJECT

public:
    explicit Clothes(QWidget *parent = nullptr);
    ~Clothes();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Clothes *ui;
    AboutTovar *abouttovar;
};

#endif // CLOTHES_H
