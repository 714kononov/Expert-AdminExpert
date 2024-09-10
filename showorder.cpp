#include "showorder.h"
#include "ui_showorder.h"


ShowOrder::ShowOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowOrder)
{
    ui->setupUi(this);
}

ShowOrder::~ShowOrder()
{
    delete ui;
}
