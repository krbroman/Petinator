#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>
#include <QMessageBox>
#include "questions.h"

namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = nullptr);
    ~MainWindow3();

    static int countOfQuestion;

private slots:
    void on_pushButton_Yes_clicked();

    void on_pushButton_No_clicked();

private:
    Ui::MainWindow3 *ui;
    //Questions quest;
};

#endif // MAINWINDOW3_H
