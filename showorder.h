#ifndef SHOWORDER_H
#define SHOWORDER_H

#include <QDialog>

namespace Ui {
class ShowOrder;
}

class ShowOrder : public QDialog
{
    Q_OBJECT

public:
    explicit ShowOrder(QWidget *parent = nullptr);
    ~ShowOrder();

private:
    Ui::ShowOrder *ui;
};

#endif // SHOWORDER_H
