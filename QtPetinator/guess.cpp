#include "guess.h"
#include "ui_guess.h"

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
    for(int i = 0; i < Questions::getCountOfAnimals(); i++)
        for(int j = 0; j < Questions::getCountOfQuestion(); j++)
            if (quest.answersFromUsers[j] == quest.answersForAnimals[i][j])
                quest.countOfСoincidence[i]++;

    int max = -1;
    int animal = -1;
    for (int i = 0; i < Questions::getCountOfAnimals(); i++)
        if (quest.countOfСoincidence[i] > max) {
            max = quest.countOfСoincidence[i];
            animal = i;
        }

    ui->Suggestion->setText(quest.animals[animal]);

    for(int i = 0; i < Questions::getCountOfAnimals(); i++)
        quest.countOfСoincidence[i] = 0;
}

Guess::~Guess()
{
    delete ui;
}

void Guess::on_pushButton_No_clicked()
{
    this->close();
    //checkAnimal = new CheckAnimal();
    //checkAnimal->show();
}

void Guess::on_pushButton_Yes_clicked()
{
    this->close();
    //winning = new Winning();
    //winning->show();
}
