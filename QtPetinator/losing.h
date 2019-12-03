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

private slots:
    void on_pushButton_Play_clicked();

    void on_pushButton_Exit_clicked();

private:
    Ui::Losing *ui;
};

#endif // LOSING_H
