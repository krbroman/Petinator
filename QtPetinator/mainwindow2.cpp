#include "mainwindow2.h"
#include "ui_mainwindow2.h"


MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    numberOfQuestion = quest.numOfTheNextQuestion();
    ui->label->setText(quest.questions[numberOfQuestion]);

}

int MainWindow2::countOfQuestionAfterButton = 1;

MainWindow2::~MainWindow2()
{
    delete ui;
}


//Обработчик "да"
void MainWindow2::on_pushButton_2_clicked()
{
    countOfQuestionAfterButton++;
    if (countOfQuestionAfterButton == 30) {
        this->close();
    }

    quest.answersFromUsers[numberOfQuestion] = 1;

    numberOfQuestion = quest.numOfTheNextQuestion();
    ui->label->setText(quest.questions[numberOfQuestion]);

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestionAfterButton == 11) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 21) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 29) {
        this->close();
        guess = new Guess(quest);
        guess->show();
    }
}

//Обработчик "нет"
void MainWindow2::on_pushButton_clicked()
{
    countOfQuestionAfterButton++;
    if (countOfQuestionAfterButton == 30) {
        this->close();
    }

    quest.answersFromUsers[numberOfQuestion] = 0;

    numberOfQuestion = quest.numOfTheNextQuestion();
    ui->label->setText(quest.questions[numberOfQuestion]);

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestionAfterButton == 11) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 21) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 29) {
        this->close();
        guess = new Guess(quest);
        guess->show();
    }
}


void MainWindow2::on_pushButton_Now_clicked()
{
    guess = new Guess(quest);
    guess->show();
}
