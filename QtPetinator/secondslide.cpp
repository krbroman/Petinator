#include "secondslide.h"
#include "ui_secondslide.h"

SecondSlide::SecondSlide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondSlide)
{
    ui->setupUi(this);
}

SecondSlide::~SecondSlide()
{
    delete ui;
}

void SecondSlide::on_pushButton_clicked()
{
    this->close();
    mainWindow2 = new MainWindow2();
    mainWindow2->show();
}
