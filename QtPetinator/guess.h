#ifndef GUESS_H
#define GUESS_H

#include <QDialog>

namespace Ui {
class Guess;
}

class Guess : public QDialog
{
    Q_OBJECT

public:
    explicit Guess(QWidget *parent = nullptr);
    ~Guess();

private:
    Ui::Guess *ui;
};

#endif // GUESS_H
