#ifndef SECONDSLIDE_H
#define SECONDSLIDE_H

#include <QDialog>
#include "mainwindow2.h"

namespace Ui {
class SecondSlide;
}

class SecondSlide : public QDialog
{
    Q_OBJECT

public:
    explicit SecondSlide(QWidget *parent = nullptr);
    ~SecondSlide();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecondSlide *ui;
    MainWindow2* mainWindow2;
};

#endif // SECONDSLIDE_H
