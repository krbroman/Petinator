#include "winning.h"
#include "ui_winning.h"
#include <QMessageBox>

Winning::Winning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winning)
{
    ui->setupUi(this);
}

Winning::Winning(Questions& quest, int animal) :
    ui(new Ui::Winning)
{
    ui->setupUi(this);
    this->thisQuest = &quest;

    quest.query.qu.prepare("Update Chances SET \"Частота загадывания\" = \"Частота загадывания\" + 1  where ID = :i  ");
    quest.query.qu.bindValue(":i", animal);
    quest.query.qu.exec();


    QPixmap pix(":/resources/Slide5_3.png");
    int h = ui->label1->height();
    int w = ui->label1->width();
    ui->label1->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/Slide5_3.png");
    h = ui->label2->height();
    w = ui->label2->width();
    ui->label2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/source/AllSlides.png");
    h = ui->label3->height();
    w = ui->label3->width();
    ui->label3->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Slide5_4.png");
    h = ui->label4->height();
    w = ui->label4->width();
    ui->label4->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide5_5.png");
    h = ui->label5->height();
    w = ui->label5->width();
    ui->label5->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix6(":/resources/Slide5_1.png");
    h = ui->label6->height();
    w = ui->label6->width();
    ui->label6->setPixmap(pix6.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix7(":/resources/Slide5_2.png");
    h = ui->label7->height();
    w = ui->label7->width();
    ui->label7->setPixmap(pix7.scaled(w, h, Qt::KeepAspectRatio));

    //Добавляем совпадение. Осталось выгрузить в Result.
    //quest.frequencyOfChoise[animal]++;
}

Winning::~Winning()
{
    delete ui;
}

void Winning::on_pushButton_Exit_clicked()
{
    //QString file = QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Client/Petinator_Server_Client.exe, Upload";
    //system(qPrintable(file));
    system("E:\\Petinator\\build-QtPetinator-Desktop_Qt_5_12_6_MSVC2017_32bit-Debug\\Client\\Petinator_Server_Client.exe, Upload");

    this->close();
}

void Winning::on_pushButton_Play_clicked()
{
    //QString file = QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Client/Petinator_Server_Client.exe, Upload";
    //system(qPrintable(file));
    system("E:\\Petinator\\build-QtPetinator-Desktop_Qt_5_12_6_MSVC2017_32bit-Debug\\Client\\Petinator_Server_Client.exe, Upload");

    this->close();
}
