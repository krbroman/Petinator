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

    this->thisQuest = &quest;

    for(int i = 0; i < Questions::getCountOfAnimals(); i++)
        for(int j = 0; j < Questions::getCountOfQuestion(); j++)
            if(quest.answersFromUsers[j] != 2)
                if (quest.answersFromUsers[j] == quest.answersForAnimals[i][j])
                    quest.countOfСoincidence[i]++;

    int max = -1;
    expectedAnimal = -1;
    for (int i = 0; i < Questions::getCountOfAnimals(); i++)
        if (quest.countOfСoincidence[i] > max) {
            max = quest.countOfСoincidence[i];
            expectedAnimal = i;
        } else if (quest.countOfСoincidence[i] == max)
            if (quest.frequencyOfChoise[i] > quest.frequencyOfChoise[expectedAnimal]) {
                max = quest.countOfСoincidence[i];
                expectedAnimal = i;
            }

    ui->Suggestion->setText(quest.animals[expectedAnimal]);

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
}

void Guess::on_pushButton_Yes_clicked()
{
    this->close();
    winning = new Winning(expectedAnimal);
    winning->show();
}
