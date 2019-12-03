#ifndef CHECKANIMAL_H
#define CHECKANIMAL_H

#include <QDialog>
#include "questions.h"
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
    CheckAnimal(Questions&);
    ~CheckAnimal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CheckAnimal *ui;
    AnimalExists* animalExists;
    AddNewAnimal* addNewAnimal;

    Questions* thisQuest;

    bool check;

    QString usersAnimal;
};

#endif // CHECKANIMAL_H
