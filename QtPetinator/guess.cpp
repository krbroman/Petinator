#include "guess.h"
#include "ui_guess.h"

Guess::Guess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Guess)
{
    ui->setupUi(this);
}

Guess::~Guess()
{
    delete ui;
}
