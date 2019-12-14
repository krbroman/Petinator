#ifndef GUESSLAST_H
#define GUESSLAST_H

#include <QDialog>
#include "questions.h"
#include "winning.h"
#include "checkanimal.h"

namespace Ui {
class GuessLast;
}

class GuessLast : public QDialog
{
    Q_OBJECT

public:
    explicit GuessLast(QWidget *parent = nullptr);
    GuessLast(Questions&);
    ~GuessLast();

private slots:
    void on_pushButton_Yes_clicked();

    void on_pushButton_No_clicked();

private:
    Ui::GuessLast *ui;

    Winning* winning;
    CheckAnimal* checkAnimal;
    Questions* thisQuest;

    //Выбранное животное
    int expectedAnimal;
};

#endif // GUESSLAST_H
