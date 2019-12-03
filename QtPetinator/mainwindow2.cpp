#include "mainwindow2.h"
#include "ui_mainwindow2.h"


MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    numberOfQuestion = quest.numOfTheNextQuestion();
    ui->label->setText(quest.questions[numberOfQuestion]);
    countOfQuestionAfterButton = 0;

}

MainWindow2::~MainWindow2()
{
    countOfQuestionAfterButton = 0;
    delete ui;
}


//Обработчик "да"
void MainWindow2::on_pushButton_2_clicked()
{
    //Увеличиваем счетчик
    countOfQuestionAfterButton++;

    //Реакция вообще на ту или иную кнопку
    quest.answersFromUsers[numberOfQuestion] = 1;

    //Следующий вопрос на экране
    numberOfQuestion = quest.numOfTheNextQuestion();
    ui->label->setText(quest.questions[numberOfQuestion]);

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestionAfterButton == 10) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 20) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == Questions::getCountOfQuestion() - 1) {
        this->close();
        guessLast = new GuessLast(quest);
        guessLast->show();
    }
}

//Обработчик "нет"
void MainWindow2::on_pushButton_clicked()
{
    //Увеличиваем счетчик
    countOfQuestionAfterButton++;

    //Реакция вообще на ту или иную кнопку
    quest.answersFromUsers[numberOfQuestion] = 0;

    //Следующий вопрос на экране
    numberOfQuestion = quest.numOfTheNextQuestion();
    ui->label->setText(quest.questions[numberOfQuestion]);

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestionAfterButton == 10) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 20) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == Questions::getCountOfQuestion() - 1) {
        this->close();
        guessLast = new GuessLast(quest);
        guessLast->show();
    }
}


void MainWindow2::on_pushButton_Now_clicked()
{
    guess = new Guess(quest);
    guess->show();
}
