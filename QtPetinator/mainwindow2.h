#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QMessageBox>
#include "questions.h"
#include "guess.h"
#include "guesslast.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_Now_clicked();

private:
    Ui::MainWindow2 *ui;
    Questions quest;
    Guess* guess;
    GuessLast* guessLast;

    int numberOfQuestion;

    int countOfQuestionAfterButton;
};

#endif // MAINWINDOW2_H
