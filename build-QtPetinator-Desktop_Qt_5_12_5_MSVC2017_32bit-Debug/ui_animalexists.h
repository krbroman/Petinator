/********************************************************************************
** Form generated from reading UI file 'animalexists.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMALEXISTS_H
#define UI_ANIMALEXISTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AnimalExists
{
public:
    QLabel *label;
    QPushButton *pushButton_Ok;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label6;
    QLabel *label7;

    void setupUi(QDialog *AnimalExists)
    {
        if (AnimalExists->objectName().isEmpty())
            AnimalExists->setObjectName(QString::fromUtf8("AnimalExists"));
        AnimalExists->resize(1024, 768);
        label = new QLabel(AnimalExists);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(275, 237, 473, 139));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        pushButton_Ok = new QPushButton(AnimalExists);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(380, 624, 271, 91));
        QFont font1;
        font1.setPointSize(33);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_Ok->setFont(font1);
        pushButton_Ok->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"color:rgba(204, 57, 31, 196);\n"
"font-size:33pt;\n"
"font:\"Arial Rounded MT Bold\";"));
        label1 = new QLabel(AnimalExists);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(681, 271, 241, 245));
        label2 = new QLabel(AnimalExists);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(0, 0, 1024, 768));
        label3 = new QLabel(AnimalExists);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(232, 223, 560, 168));
        label4 = new QLabel(AnimalExists);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(380, 624, 263, 86));
        label6 = new QLabel(AnimalExists);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(-35, 340, 1078, 207));
        label7 = new QLabel(AnimalExists);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(3, 437, 1055, 117));
        label2->raise();
        label3->raise();
        label1->raise();
        label4->raise();
        label6->raise();
        label7->raise();
        label->raise();
        pushButton_Ok->raise();

        retranslateUi(AnimalExists);

        QMetaObject::connectSlotsByName(AnimalExists);
    } // setupUi

    void retranslateUi(QDialog *AnimalExists)
    {
        AnimalExists->setWindowTitle(QApplication::translate("AnimalExists", "Dialog", nullptr));
        label->setText(QApplication::translate("AnimalExists", "<html><head/><body><p align = \"center\"><span style=\" font-family:'Comic Sans MS'; ont-size:30pt;color:#c85836;\">\320\226\320\270\320\262\320\276\321\202\320\275\320\276\320\265 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\320\265\321\202 \320\262 \320\261\320\260\320\267\320\265<br/> \320\264\320\260\320\275\320\275\321\213\321\205. \320\222\320\276\320\267\320\274\320\276\320\266\320\275\320\276, \320\262\320\260\321\210\320\270 <br/>\320\276\321\202\320\262\320\265\321\202\321\213 \320\261\321\213\320\273\320\270 \320\275\320\265\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\321\213</span></p></body></html>\n"
"\n"
"", nullptr));
        pushButton_Ok->setText(QApplication::translate("AnimalExists", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label6->setText(QString());
        label7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AnimalExists: public Ui_AnimalExists {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMALEXISTS_H
