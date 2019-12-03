#include "losing.h"
#include "ui_losing.h"

Losing::Losing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Losing)
{
    ui->setupUi(this);
}

Losing::~Losing()
{
    delete ui;
}

void Losing::on_pushButton_Play_clicked()
{
    this->close();
}

void Losing::on_pushButton_Exit_clicked()
{
    this->close();
}
