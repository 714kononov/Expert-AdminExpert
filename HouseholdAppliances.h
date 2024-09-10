#ifndef HOUSEHOLDAPPLIANCES_H
#define HOUSEHOLDAPPLIANCES_H

#include <QDialog>
#include <abouttovar.h>

namespace Ui {
class HouseholdAppliances;
}

class HouseholdAppliances : public QDialog
{
    Q_OBJECT

public:
    explicit HouseholdAppliances(QWidget *parent = nullptr);
    ~HouseholdAppliances();

private:
    Ui::HouseholdAppliances *ui;
    AboutTovar *abouttovar;
};

#endif // HOUSEHOLDAPPLIANCES_H
