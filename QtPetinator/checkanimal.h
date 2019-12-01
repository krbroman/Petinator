#ifndef CHECKANIMAL_H
#define CHECKANIMAL_H

#include <QDialog>
#include "animalexists.h"
#include "addnewanimal.h"

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
    AnimalExists* anemalExists;
    AddNewAnimal* addNewAnimal;
};

#endif // CHECKANIMAL_H
