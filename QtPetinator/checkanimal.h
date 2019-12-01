#ifndef CHECKANIMAL_H
#define CHECKANIMAL_H

#include <QDialog>

namespace Ui {
class CheckAnimal;
}

class CheckAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit CheckAnimal(QWidget *parent = nullptr);
    ~CheckAnimal();

private:
    Ui::CheckAnimal *ui;
};

#endif // CHECKANIMAL_H
