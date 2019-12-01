#ifndef LOSING_H
#define LOSING_H

#include <QDialog>

namespace Ui {
class Losing;
}

class Losing : public QDialog
{
    Q_OBJECT

public:
    explicit Losing(QWidget *parent = nullptr);
    ~Losing();

private:
    Ui::Losing *ui;
};

#endif // LOSING_H
