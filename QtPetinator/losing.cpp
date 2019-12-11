#include "losing.h"
#include "ui_losing.h"
#include <QMessageBox>

Losing::Losing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Losing)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/Slide6_1.png");
    int h = ui->label1->height();
    int w = ui->label1->width();
    ui->label1->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/Slide6_2.png");
    h = ui->label2->height();
    w = ui->label2->width();
    ui->label2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/Slide5_3.png");
    h = ui->label3->height();
    w = ui->label3->width();
    ui->label3->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Slide5_3.png");
    h = ui->label4->height();
    w = ui->label4->width();
    ui->label4->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide5_4.png");
    h = ui->label5->height();
    w = ui->label5->width();
    ui->label5->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix6(":/resources/Slide5_5.png");
    h = ui->label6->height();
    w = ui->label6->width();
    ui->label6->setPixmap(pix6.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix7(":/source/AllSlides.png");
    h = ui->label7->height();
    w = ui->label7->width();
    ui->label7->setPixmap(pix7.scaled(w, h, Qt::KeepAspectRatio));
}

Losing::Losing(Questions& quest) :
    ui(new Ui::Losing)
{
    ui->setupUi(this);
    thisQuest = &quest;

    /*Вот именно здесь надо добавить новое в базу*/

    quest.query.qu.prepare("INSERT INTO Questions VALUE(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
    quest.query.qu.addBindValue(quest.countOfAnimalsTest);
    quest.query.qu.addBindValue(">>>");//
    for(int i = 0; i < quest.countOfQuestionTest;++i)
        quest.query.qu.addBindValue(quest.answersFromUsers[i]);
    quest.query.qu.exec();

    quest.query.qu.prepare("INSERT INTO Chances VALUE(:i, 2, 0)");
    quest.query.qu.bindValue(":i", quest.countOfAnimalsTest);
    quest.query.qu.exec();


    QPixmap pix(":/resources/Slide6_1.png");
    int h = ui->label1->height();
    int w = ui->label1->width();
    ui->label1->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/resources/Slide6_2.png");
    h = ui->label2->height();
    w = ui->label2->width();
    ui->label2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/Slide5_3.png");
    h = ui->label3->height();
    w = ui->label3->width();
    ui->label3->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Slide5_3.png");
    h = ui->label4->height();
    w = ui->label4->width();
    ui->label4->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide5_4.png");
    h = ui->label5->height();
    w = ui->label5->width();
    ui->label5->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix6(":/resources/Slide5_5.png");
    h = ui->label6->height();
    w = ui->label6->width();
    ui->label6->setPixmap(pix6.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix7(":/source/AllSlides.png");
    h = ui->label7->height();
    w = ui->label7->width();
    ui->label7->setPixmap(pix7.scaled(w, h, Qt::KeepAspectRatio));
}

Losing::~Losing()
{
    delete ui;
}

void Losing::on_pushButton_Play_clicked()
{
    this->close();
}

void Losing::on_pushButton_Exit_clicked()
{
    this->close();
}
