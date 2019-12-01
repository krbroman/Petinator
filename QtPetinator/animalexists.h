#ifndef ANIMALEXISTS_H
#define ANIMALEXISTS_H

#include <QDialog>

namespace Ui {
class AnimalExists;
}

class AnimalExists : public QDialog
{
    Q_OBJECT

public:
    explicit AnimalExists(QWidget *parent = nullptr);
    ~AnimalExists();

private:
    Ui::AnimalExists *ui;
};

#endif // ANIMALEXISTS_H
