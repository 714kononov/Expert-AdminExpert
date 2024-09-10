#ifndef WINDOW_H
#define WINDOW_H

#include <QDialog>
#include <abouttovar.h>
namespace Ui {
class Window;
}

class Window : public QDialog
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = nullptr);
    ~Window();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Window *ui;
    AboutTovar *abouttovar;
};

#endif // WINDOW_H
