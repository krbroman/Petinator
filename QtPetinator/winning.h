#ifndef WINNING_H
#define WINNING_H

#include <QDialog>
#include "questions.h"

namespace Ui {
class Winning;
}

class Winning : public QDialog
{
    Q_OBJECT

public:
    explicit Winning(QWidget *parent = nullptr);
    Winning (int);
    ~Winning();

private slots:
    void on_pushButton_Exit_clicked();

    void on_pushButton_Play_clicked();

private:
    Ui::Winning *ui;
};

#endif // WINNING_H
