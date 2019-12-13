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

Losing::Losing(Questions& quest, QString animal) :
    ui(new Ui::Losing)
{
    ui->setupUi(this);
    thisQuest = &quest;

    int _index = -1;
    for (int i = 0; i < quest.countOfAnimalsTest; ++i)
    if(quest.animals[i] == animal)
    _index = i;

    if(_index == -1)
    {
    quest.query.qu.prepare("INSERT INTO Questions VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?);");
    quest.query.qu.addBindValue(quest.countOfAnimalsTest);
    quest.query.qu.addBindValue(animal);
    for(int i = 0; i < quest.countOfQuestionTest;++i)
    quest.query.qu.addBindValue(quest.answersFromUsers[i]);
    quest.query.qu.exec();
    quest.query.qu.prepare("INSERT INTO Chances VALUES(:i, 2, 0)");
    quest.query.qu.bindValue(":i", quest.countOfAnimalsTest);
    quest.query.qu.exec();
    }
    else if (_index != -1)
    {
    quest.query.qu.prepare("Select \"Частота загадывания\" from Chances where ID = :i");
    quest.query.qu.bindValue(":i", _index);
    quest.query.qu.exec();
    quest.query.qu.next();
    int _chance = quest.query.qu.value(0).toInt();
    quest.query.qu.prepare("Delete From Chances where ID = :i");
    quest.query.qu.bindValue(":i",_index);
    quest.query.qu.exec();
    quest.query.qu.prepare("Delete From Questions where ID = :i");
    quest.query.qu.bindValue(":i",_index);
    quest.query.qu.exec();
    quest.query.qu.prepare("INSERT INTO Questions VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?);");
    quest.query.qu.addBindValue(_index);
    quest.query.qu.addBindValue(animal);
    for(int i = 0; i < quest.countOfQuestionTest;++i)
    quest.query.qu.addBindValue(quest.answersFromUsers[i]);
    quest.query.qu.exec();
    quest.query.qu.prepare("INSERT INTO Chances VALUES(:i, :j, 0)");
    quest.query.qu.bindValue(":i", _index);
    quest.query.qu.bindValue(":j",_chance + 1);
    quest.query.qu.exec();
    }


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
    //system("\\Client\\Petinator_Server_Client.exe, Upload");
    QString file = QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Client/Petinator_Server_Client.exe, Upload";
    system(qPrintable(file));

    this->close();
}

void Losing::on_pushButton_Exit_clicked()
{
    QString file = QDir::toNativeSeparators(QApplication::applicationDirPath()) + "/Client/Petinator_Server_Client.exe, Upload";
    system(qPrintable(file));

    this->close();
}
