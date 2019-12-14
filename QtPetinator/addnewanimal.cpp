#include "addnewanimal.h"
#include "ui_addnewanimal.h"
#include <QMessageBox>

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
    thisQuest = &quest;
    thisAnimal = animal;

    QPixmap pix(":/source/AllSlides.png");
    int h = ui->label_3->height();
    int w = ui->label_3->width();
    ui->label_3->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix1(":/resources/Slide8_2.png");
    h = ui->label_4->height();
    w = ui->label_4->width();
    ui->label_4->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/Slide8_2.png");
    h = ui->label_5->height();
    w = ui->label_5->width();
    ui->label_5->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/Slide8_3.png");
    h = ui->label_6->height();
    w = ui->label_6->width();
    ui->label_6->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Slide8_3.png");
    h = ui->label_7->height();
    w = ui->label_7->width();
    ui->label_7->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide8_4.png");
    h = ui->label_8->height();
    w = ui->label_8->width();
    ui->label_8->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix6(":/resources/Slide8_5.png");
    h = ui->label_9->height();
    w = ui->label_9->width();
    ui->label_9->setPixmap(pix6.scaled(w, h, Qt::KeepAspectRatio));

    this->setWindowIcon(QIcon(":/icon/icon.png"));
}

AddNewAnimal::~AddNewAnimal()
{
    delete ui;
}

void AddNewAnimal::on_pushButton_Yes_clicked()
{
    this->close();

    losing = new Losing(*thisQuest, thisAnimal);
    losing->show();
}

void AddNewAnimal::on_pushButton_No_clicked()
{
    this->close();
    losing = new Losing();
    losing->show();
}
