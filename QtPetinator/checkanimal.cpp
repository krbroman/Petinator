#include "checkanimal.h"
#include "ui_checkanimal.h"

CheckAnimal::CheckAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckAnimal)
{
    ui->setupUi(this);
}

CheckAnimal::CheckAnimal(Questions& quest) :
    ui(new Ui::CheckAnimal)
{
    ui->setupUi(this);
    this->thisQuest = &quest;

    check = false;
}


CheckAnimal::~CheckAnimal()
{
    delete ui;
}

void CheckAnimal::on_pushButton_clicked()
{
    usersAnimal = ui->usersAnimal->text();
    for (int i = 0; i < Questions::getCountOfAnimals(); i++)
        if (ui->usersAnimal->text() == thisQuest->animals[i])
            check = true;
    if (check) {
        this->close();
        animalExists = new AnimalExists();
        animalExists->show();
    } else {
        this->close();
        addNewAnimal = new AddNewAnimal(*thisQuest, usersAnimal);
        addNewAnimal->show();
    }
}
