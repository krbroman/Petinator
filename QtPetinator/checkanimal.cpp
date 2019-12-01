#include "checkanimal.h"
#include "ui_checkanimal.h"

CheckAnimal::CheckAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckAnimal)
{
    ui->setupUi(this);
}

CheckAnimal::~CheckAnimal()
{
    delete ui;
}
