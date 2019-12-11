#ifndef ADDNEWANIMAL_H
#define ADDNEWANIMAL_H

#include <QDialog>
#include "losing.h"
#include "questions.h"

namespace Ui {
class AddNewAnimal;
}

class AddNewAnimal : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewAnimal(QWidget *parent = nullptr);
    AddNewAnimal(Questions&, QString);
    ~AddNewAnimal();

private slots:
    void on_pushButton_Yes_clicked();

    void on_pushButton_No_clicked();

private:
    Ui::AddNewAnimal *ui;
    Losing* losing;
    Questions* thisQuest;
    QString thisAnimal;
};

#endif // ADDNEWANIMAL_H
