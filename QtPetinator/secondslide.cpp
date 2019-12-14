#include "secondslide.h"
#include "ui_secondslide.h"
#include <QMessageBox>

SecondSlide::SecondSlide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondSlide)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/Slide2_3.png");
    int h = ui->label6->height();
    int w = ui->label6->width();
    ui->label6->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/source/AllSlides.png");
    h = ui->label2->height();
    w = ui->label2->width();
    ui->label2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix3(":/resources/Slide2_2.png");
    h = ui->label3->height();
    w = ui->label3->width();
    ui->label3->setPixmap(pix3.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/resources/Slide2_1.png");
    h = ui->label4->height();
    w = ui->label4->width();
    ui->label4->setPixmap(pix4.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix5(":/resources/Slide2_4.png");
    h = ui->label5->height();
    w = ui->label5->width();
    ui->label5->setPixmap(pix5.scaled(w, h, Qt::KeepAspectRatio));

    this->setWindowIcon(QIcon(":/icon/icon.png"));
}

SecondSlide::~SecondSlide()
{
    delete ui;
}

void SecondSlide::on_pushButton_clicked()
{
    this->close();
    mainWindow2 = new MainWindow2();
    mainWindow2->show();
}
