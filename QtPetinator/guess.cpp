#include "guess.h"
#include "ui_guess.h"
#include <QMessageBox>

Guess::Guess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Guess)
{
    ui->setupUi(this);
}

Guess::Guess(Questions &quest) :
    ui(new Ui::Guess)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/Slide4_1.png");
    int h = ui->label1->height();
    int w = ui->label1->width();
    ui->label1->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/Script4_2.png");
    h = ui->label2->height();
    w = ui->label2->width();
    ui->label2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/Script4_3.png");
    h = ui->label3->height();
    w = ui->label3->width();
    ui->label3->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Script4_2.png");
    h = ui->label4->height();
    w = ui->label4->width();
    ui->label4->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide4_4.png");
    h = ui->label5->height();
    w = ui->label5->width();
    ui->label5->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix6(":/source/AllSlides.png");
    h = ui->label6->height();
    w = ui->label6->width();
    ui->label6->setPixmap(pix6.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix7(":/resources/Slide4_5.png");
    h = ui->label7->height();
    w = ui->label7->width();
    ui->label7->setPixmap(pix7.scaled(w, h, Qt::KeepAspectRatio));

    this->thisQuest = &quest;

    for(int i = 0; i < thisQuest->getCountOfAnimals(); i++)
          { thisQuest->query.qu.prepare("Select * from Questions where ID = :i");
           thisQuest->query.qu.bindValue(":i", i);
           thisQuest->query.qu.exec();
           thisQuest->query.qu.next();
           for(int j = 0; j < thisQuest->getCountOfQuestion(); j++)
           {
               if(quest.answersFromUsers[j] != 2)
                   if (quest.answersFromUsers[j] == thisQuest->query.qu.value(j+2).toInt())
                       quest.countOfСoincidence[i]++;
           }
       }

    int max = -1;
    expectedAnimal = -1;
    for (int i = 0; i < thisQuest->getCountOfAnimals(); i++)
        if (quest.countOfСoincidence[i] > max) {
            max = quest.countOfСoincidence[i];
            expectedAnimal = i;
        } else if (quest.countOfСoincidence[i] == max)
            if (quest.frequencyOfChoise[i] > quest.frequencyOfChoise[expectedAnimal]) {
                max = quest.countOfСoincidence[i];
                expectedAnimal = i;
            }

    ui->Suggestion->setText(quest.animals[expectedAnimal]);

    for(int i = 0; i < thisQuest->getCountOfAnimals(); i++)
        quest.countOfСoincidence[i] = 0;

    this->setWindowIcon(QIcon(":/icon/icon.png"));
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
    winning = new Winning(*thisQuest, expectedAnimal);
    winning->show();
}
