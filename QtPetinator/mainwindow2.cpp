#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QMessageBox>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/Slide3_1.png");
    int h = ui->label1->height();
    int w = ui->label1->width();
    ui->label1->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/Slide3_2.png");
    h = ui->label2->height();
    w = ui->label2->width();
    ui->label2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/Slide3_3.png");
    h = ui->label3->height();
    w = ui->label3->width();
    ui->label3->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Slide3_4.png");
    h = ui->label4->height();
    w = ui->label4->width();
    ui->label4->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide3_5.png");
    h = ui->label5->height();
    w = ui->label5->width();
    ui->label5->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix6(":/source/AllSlides.png");
    h = ui->label6->height();
    w = ui->label6->width();
    ui->label6->setPixmap(pix6.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix7(":/resources/Slide3_3.png");
    h = ui->label7->height();
    w = ui->label7->width();
    ui->label7->setPixmap(pix7.scaled(w, h, Qt::KeepAspectRatio));

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
    /*if (countOfQuestionAfterButton == Questions::getCountOfQuestion()) {

    }*/
    //Увеличиваем счетчик
    countOfQuestionAfterButton++;

    //Реакция вообще на ту или иную кнопку
    quest.answersFromUsers[numberOfQuestion] = 1;

    //Необходимое условие для обработки ВСЕХ вопросов без вылета
    if (countOfQuestionAfterButton < Questions::getCountOfQuestion()) {
        //Следующий вопрос на экране
        numberOfQuestion = quest.numOfTheNextQuestion();
        ui->label->setText(quest.questions[numberOfQuestion]);
    }

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestionAfterButton == 10) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 20) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == Questions::getCountOfQuestion()) {
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

    //Необходимое условие для обработки ВСЕХ вопросов без вылета
    if (countOfQuestionAfterButton < Questions::getCountOfQuestion()) {
        //Следующий вопрос на экране
        numberOfQuestion = quest.numOfTheNextQuestion();
        ui->label->setText(quest.questions[numberOfQuestion]);
    }

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestionAfterButton == 10) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == 20) {
        guess = new Guess(quest);
        guess->show();
    } else if (countOfQuestionAfterButton == Questions::getCountOfQuestion()) {
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
