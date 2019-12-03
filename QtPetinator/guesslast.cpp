#include "guesslast.h"
#include "ui_guesslast.h"

GuessLast::GuessLast(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GuessLast)
{
    ui->setupUi(this);
}

GuessLast::GuessLast(Questions &quest) :
    ui(new Ui::GuessLast)
{
    ui->setupUi(this);

    this->thisQuest = &quest;

    for(int i = 0; i < Questions::getCountOfAnimals(); i++)
        for(int j = 0; j < Questions::getCountOfQuestion(); j++)
            if (quest.answersFromUsers[j] == quest.answersForAnimals[i][j])
                quest.countOfСoincidence[i]++;

    int max = -1;
    expectedAnimal = -1;
    for (int i = 0; i < Questions::getCountOfAnimals(); i++)
        if (quest.countOfСoincidence[i] > max) {
            max = quest.countOfСoincidence[i];
            expectedAnimal = i;
        }

    ui->Suggestion->setText(quest.animals[expectedAnimal]);

    for(int i = 0; i < Questions::getCountOfAnimals(); i++)
        quest.countOfСoincidence[i] = 0;
}

GuessLast::~GuessLast()
{
    delete ui;
}

void GuessLast::on_pushButton_Yes_clicked()
{
    this->close();
    winning = new Winning(expectedAnimal);
    winning->show();
}

void GuessLast::on_pushButton_No_clicked()
{
    this->close();
    checkAnimal = new CheckAnimal(*thisQuest);
    checkAnimal->show();
}
