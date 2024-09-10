#ifndef BUILD_H
#define BUILD_H

#include <QDialog>
#include <abouttovar.h>

namespace Ui {
class Build;
}

class Build : public QDialog
{
    Q_OBJECT

public:
    explicit Build(QWidget *parent = nullptr);
    ~Build();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Build *ui;
    AboutTovar *abouttovar;
};

#endif // BUILD_H
