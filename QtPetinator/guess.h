#ifndef GUESS_H
#define GUESS_H

#include <QDialog>
#include "winning.h"
#include "questions.h"

namespace Ui {
class Guess;
}

class Guess : public QDialog
{
    Q_OBJECT

public:
    explicit Guess(QWidget *parent = nullptr);
    Guess(Questions&);
    ~Guess();

private slots:
    void on_pushButton_No_clicked();
    void on_pushButton_Yes_clicked();

private:
    Ui::Guess *ui;
    Winning* winning;
    Questions* thisQuest;

    //Выбранное животное
    int expectedAnimal;
};

#endif // GUESS_H
