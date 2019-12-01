#ifndef ANIMALEXISTS_H
#define ANIMALEXISTS_H

#include <QDialog>
#include "losing.h"

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
    Losing* losing;
};

#endif // ANIMALEXISTS_H