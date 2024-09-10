#ifndef CHOOSEEXPERTIZA_H
#define CHOOSEEXPERTIZA_H

#include <QDialog>
#include <car.h>
#include <shoes.h>
#include <clothes.h>
#include <HouseholdAppliances.h>
#include <build.h>
#include <window.h>
#include <HouseholdAppliances.h>
#include <photovideo.h>

namespace Ui {
class ChooseExpertiza;
}

class ChooseExpertiza : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseExpertiza(QWidget *parent = nullptr);
    ~ChooseExpertiza();

signals:
    void ChooseExpertizaChange(const QString &ChooseExpertizaZnac);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::ChooseExpertiza *ui;
    PhotoVideo *photovideo;

};

#endif // CHOOSEEXPERTIZA_H
