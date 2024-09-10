#include "HouseholdAppliances.h"
#include "ui_householdappliances.h"

HouseholdAppliances::HouseholdAppliances(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HouseholdAppliances)
{
    ui->setupUi(this);
}

HouseholdAppliances::~HouseholdAppliances()
{
    delete ui;
}


