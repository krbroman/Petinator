#include "animalexists.h"
#include "ui_animalexists.h"

AnimalExists::AnimalExists(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnimalExists)
{
    ui->setupUi(this);
}

AnimalExists::~AnimalExists()
{
    delete ui;
}