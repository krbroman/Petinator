#include "mainwindow2.h"
#include "ui_mainwindow2.h"


MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    ui->label->setText(quest.questions[0]);

}

int MainWindow2::countOfQuestion = 0;

MainWindow2::~MainWindow2()
{
    delete ui;
}


//Обработчик "да"
void MainWindow2::on_pushButton_2_clicked()
{
    ui->label->setText(quest.questions[++countOfQuestion]);

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestion == 10) {
        QMessageBox::StandardButton reply =
                QMessageBox::question(this, "Предположение", "Это собака?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QMessageBox::StandardButton reply2 =
                    QMessageBox::question(this, "Ура!", "Вы выиграли! Не хотите попробовать еще раз?", QMessageBox::Yes | QMessageBox::No);

            if (reply2 == QMessageBox::Yes) {
                //тогда чистим счетчик, удаляем второе окно и открываем первое
                countOfQuestion = -1;
            } else {
                this->close();
            }
        }

    } else if (countOfQuestion == 20) {
        QMessageBox::StandardButton reply =
                QMessageBox::question(this, "Предположение", "Это кошка?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QMessageBox::StandardButton reply2 =
                    QMessageBox::question(this, "Ура!", "Вы выиграли! Не хотите попробовать еще раз?", QMessageBox::Yes | QMessageBox::No);

            if (reply2 == QMessageBox::Yes) {
                //тогда чистим счетчик, удаляем второе окно и открываем первое
                //countOfQuestion = -1;
            } else {
                this->close();
            }
        }
    } else if (countOfQuestion == 29) {
        QMessageBox::StandardButton reply =
                QMessageBox::question(this, "Последний шанс", "Это капибара?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QMessageBox::StandardButton reply2 =
                    QMessageBox::question(this, "Ура!", "Вы выиграли! Не хотите попробовать еще раз?", QMessageBox::Yes | QMessageBox::No);

            if (reply2 == QMessageBox::Yes) {
                //тогда чистим счетчик, удаляем второе окно и открываем первое
                //countOfQuestion = -1;
            } else {
                this->close();
            }
        }
    }
}

//Обработчик "нет"
void MainWindow2::on_pushButton_clicked()
{
    ui->label->setText(quest.questions[++countOfQuestion]);

    //Обработчик на десятом, двадцатом и последнем вопросе.
    if (countOfQuestion == 10) {
        QMessageBox::StandardButton reply =
                QMessageBox::question(this, "Предположение", "Это собака?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
             QMessageBox::StandardButton reply2 =
                     QMessageBox::question(this, "Ура!", "Вы выиграли! Не хотите попробовать еще раз?", QMessageBox::Yes | QMessageBox::No);

             if (reply2 == QMessageBox::Yes) {
                 //тогда чистим счетчик, удаляем второе окно и открываем первое
                 countOfQuestion = -1;
             } else {
                 this->close();
             }
        }

    } else if (countOfQuestion == 20) {
        QMessageBox::StandardButton reply =
                QMessageBox::question(this, "Предположение", "Это кошка?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QMessageBox::StandardButton reply2 =
                    QMessageBox::question(this, "Ура!", "Вы выиграли! Не хотите попробовать еще раз?", QMessageBox::Yes | QMessageBox::No);

            if (reply2 == QMessageBox::Yes) {
                //тогда чистим счетчик, удаляем второе окно и открываем первое
                //countOfQuestion = -1;
            } else {
                this->close();
            }
        }
    } else if (countOfQuestion == 29) {
        QMessageBox::StandardButton reply =
                QMessageBox::question(this, "Последний шанс", "Это капибара?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QMessageBox::StandardButton reply2 =
                    QMessageBox::question(this, "Ура!", "Вы выиграли! Не хотите попробовать еще раз?", QMessageBox::Yes | QMessageBox::No);

            if (reply2 == QMessageBox::Yes) {
                //тогда чистим счетчик, удаляем второе окно и открываем первое
                //this->close();
                //countOfQuestion = -1;
                //ui2 = new MainWindow(this);
                //ui2->show();

            } else {
                this->close();
            }
        }
    }
}
