#ifndef GUESS_H
#define GUESS_H

#include <QDialog>
#include "winning.h"
#include "checkanimal.h"

namespace Ui {
class Guess;
}

class Guess : public QDialog
{
    Q_OBJECT

public:
    explicit Guess(QWidget *parent = nullptr);
    ~Guess();

private slots:
    void on_pushButton_No_clicked();

    void on_pushButton_Yes_clicked();

private:
    Ui::Guess *ui;
    Winning* winning;
    CheckAnimal* checkAnimal;
};

#endif // GUESS_H
