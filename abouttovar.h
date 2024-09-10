// abouttovar.h
#ifndef ABOUTTOVAR_H
#define ABOUTTOVAR_H

#include <QDialog>
#include <contacts.h>

namespace Ui {
class AboutTovar;
}

struct UserDesc {
    QString aboutTovar;
};

class AboutTovar : public QDialog
{
    Q_OBJECT

public:
    explicit AboutTovar(QWidget *parent = nullptr);
    ~AboutTovar();

signals:
    void aboutTovarChange(const QString &aboutTovar);

private slots:
    void on_pushButton_clicked();
    void on_plainTextEdit_textChanged();

private:
    Ui::AboutTovar *ui;
    UserDesc desc;
    Contacts *contacts;
};

#endif // ABOUTTOVAR_H
