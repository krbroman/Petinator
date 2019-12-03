#include "winning.h"
#include "ui_winning.h"

Winning::Winning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winning)
{
    ui->setupUi(this);
}

Winning::Winning(int animal) :
    ui(new Ui::Winning)
{
    ui->setupUi(this);

    //Добавляем совпадение. Осталось выгрузить в Result.
    //quest.frequencyOfChoise[animal]++;
}

Winning::~Winning()
{
    delete ui;
}

void Winning::on_pushButton_Exit_clicked()
{
    this->close();
}

void Winning::on_pushButton_Play_clicked()
{
    this->close();
}
