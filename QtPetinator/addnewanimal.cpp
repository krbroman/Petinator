#include "addnewanimal.h"
#include "ui_addnewanimal.h"

AddNewAnimal::AddNewAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewAnimal)
{
    ui->setupUi(this);
}

AddNewAnimal::~AddNewAnimal()
{
    delete ui;
}
