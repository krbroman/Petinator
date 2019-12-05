#include "checkanimal.h"
#include "ui_checkanimal.h"
#include <QMessageBox>

CheckAnimal::CheckAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckAnimal)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/Slide7_2.png");
    int h = ui->label1->height();
    int w = ui->label1->width();
    ui->label1->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/Slide7_1.png");
    h = ui->label2->height();
    w = ui->label2->width();
    ui->label2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/Slide7_3.png");
    h = ui->label3->height();
    w = ui->label3->width();
    ui->label3->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Slide7_4.png");
    h = ui->label4->height();
    w = ui->label4->width();
    ui->label4->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide7_6.png");
    h = ui->label5->height();
    w = ui->label5->width();
    ui->label5->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix6(":/resources/Slide7_5.png");
    h = ui->label6->height();
    w = ui->label6->width();
    ui->label6->setPixmap(pix6.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix7(":/resources/Slide7_7.png");
    h = ui->label7->height();
    w = ui->label7->width();
    ui->label7->setPixmap(pix7.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix8(":/source/AllSlides.png");
    h = ui->label8->height();
    w = ui->label8->width();
    ui->label8->setPixmap(pix8.scaled(w, h, Qt::KeepAspectRatio));
}

CheckAnimal::CheckAnimal(Questions& quest) :
    ui(new Ui::CheckAnimal)
{
    ui->setupUi(this);
    this->thisQuest = &quest;

    check = false;
}


CheckAnimal::~CheckAnimal()
{
    delete ui;
}

void CheckAnimal::on_pushButton_clicked()
{
    usersAnimal = ui->usersAnimal->text();
    for (int i = 0; i < thisQuest->getCountOfAnimals(); i++)
        if (ui->usersAnimal->text() == thisQuest->animals[i])
            check = true;
    if (check) {
        this->close();
        animalExists = new AnimalExists();
        animalExists->show();
    } else {
        this->close();
        addNewAnimal = new AddNewAnimal(*thisQuest, usersAnimal);
        addNewAnimal->show();
    }
}
