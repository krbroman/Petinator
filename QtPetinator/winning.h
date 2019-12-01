#ifndef WINNING_H
#define WINNING_H

#include <QDialog>

namespace Ui {
class Winning;
}

class Winning : public QDialog
{
    Q_OBJECT

public:
    explicit Winning(QWidget *parent = nullptr);
    ~Winning();

private:
    Ui::Winning *ui;
};

#endif // WINNING_H
