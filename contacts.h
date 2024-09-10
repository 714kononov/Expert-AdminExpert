// contacts.h
#ifndef CONTACTS_H
#define CONTACTS_H

#include <QDialog>
#include <finishuser.h>

class UserDesc;

namespace Ui {
class Contacts;
}

struct UserContacts {
    QString FIO;
    QString MAIl;
    QString Phone;
};

class Contacts : public QDialog
{
    Q_OBJECT

public:
    explicit Contacts(const QString &aboutTovar, QWidget *parent = nullptr);
    ~Contacts();

public slots:
    void handleAboutTovarContacts(const QString &aboutTovar);

private slots:
    void on_pushButton_clicked();
    void on_plainTextEdit_textChanged();
    void on_plainTextEdit_2_textChanged();
    void on_plainTextEdit_3_textChanged();

signals:
    void contactInfoChanged(const QString &FIO, const QString &phone, const QString &mail,const QString &aboutTovar);

private:
    Ui::Contacts *ui;
    FinishUser *finishuser;
    QString aboutTovar;
    UserContacts contacts;
};

#endif // CONTACTS_H
