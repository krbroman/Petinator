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
    this->quest = quest;
    for(int i = 0; i < Questions::getCountOfAnimals(); i++)
        for(int j = 0; j < Questions::getCountOfQuestion(); j++)
            if (quest.answersFromUsers[j] != 2)
                if (quest.answersFromUsers[j] == quest.answersForAnimals[i][j])
                    quest.countOfСoincidence[i]++;

    int max = -1;
    int animal = -1;
    for (int i = 0; i < Questions::getCountOfAnimals(); i++)
        if (quest.answersFromUsers[i] > max) {
            max = quest.answersFromUsers[i];
            animal = i;
        }

    ui->Suggestion->setText(quest.animals[animal]);
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
