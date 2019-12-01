#include "winning.h"
#include "ui_winning.h"

Winning::Winning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winning)
{
    ui->setupUi(this);
}

Winning::~Winning()
{
    delete ui;
}
