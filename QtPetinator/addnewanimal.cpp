#include "addnewanimal.h"
#include "ui_addnewanimal.h"

AddNewAnimal::AddNewAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewAnimal)
{
    ui->setupUi(this);
}

AddNewAnimal::AddNewAnimal(Questions& quest, QString animal) :
    ui(new Ui::AddNewAnimal)
{
    ui->setupUi(this);
    /*Работа с базой данных*/
}

AddNewAnimal::~AddNewAnimal()
{
    delete ui;
}

void AddNewAnimal::on_pushButton_Yes_clicked()
{
    this->close();
    /*перезаписать в базу животное*/
    losing = new Losing();
    losing->show();
}

void AddNewAnimal::on_pushButton_No_clicked()
{
    this->close();
    losing = new Losing();
    losing->show();
}
