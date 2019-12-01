#ifndef ADDNEWANIMAL_H
#define ADDNEWANIMAL_H

#include <QDialog>
#include "losing.h"

namespace Ui {
class AddNewAnimal;
}

class AddNewAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewAnimal(QWidget *parent = nullptr);
    ~AddNewAnimal();

private:
    Ui::AddNewAnimal *ui;
    Losing* losing;
};

#endif // ADDNEWANIMAL_H
