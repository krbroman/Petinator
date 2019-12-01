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

void Guess::on_pushButton_No_clicked()
{
    this->close();
}

void Guess::on_pushButton_Yes_clicked()
{
    this->close();
    winning = new Winning();
    winning->show();
}
