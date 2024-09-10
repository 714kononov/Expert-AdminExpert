// finishuser.h
#ifndef FINISHUSER_H
#define FINISHUSER_H

#include <QDialog>

class UserContacts;
class AboutTovar;

namespace Ui {
class FinishUser;
}

class FinishUser : public QDialog
{
    Q_OBJECT

public:
    explicit FinishUser(const QString &FIO, const QString &phone, const QString &mail,const QString &aboutTovar, QWidget *parent = nullptr);
    ~FinishUser();



private slots:
    void on_pushButton_2_clicked();

private:
    Ui::FinishUser *ui;
    QString description;
    UserContacts *contacts;
    QString aboutTovar;

};

#endif // FINISHUSER_H
