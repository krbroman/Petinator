/********************************************************************************
** Form generated from reading UI file 'checkanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKANIMAL_H
#define UI_CHECKANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckAnimal
{
public:
    QLabel *label;
    QLineEdit *usersAnimal;
    QPushButton *pushButton;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label8;
    QLabel *label7;

    void setupUi(QDialog *CheckAnimal)
    {
        if (CheckAnimal->objectName().isEmpty())
            CheckAnimal->setObjectName(QString::fromUtf8("CheckAnimal"));
        CheckAnimal->resize(1024, 768);
        label = new QLabel(CheckAnimal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(335, 190, 381, 122));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        usersAnimal = new QLineEdit(CheckAnimal);
        usersAnimal->setObjectName(QString::fromUtf8("usersAnimal"));
        usersAnimal->setGeometry(QRect(370, 350, 281, 51));
        usersAnimal->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);\n"
"border-style: none;"));
        pushButton = new QPushButton(CheckAnimal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 420, 291, 71));
        QFont font1;
        font1.setPointSize(27);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);\n"
"font: \"Arial Rounded MT Bold\";\n"
"color: rgba(204, 57, 31, 196);\n"
"font-size: 27pt;"));
        label1 = new QLabel(CheckAnimal);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(286, 183, 452, 142));
        label2 = new QLabel(CheckAnimal);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(149, 225, 220, 226));
        label3 = new QLabel(CheckAnimal);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(352, 348, 319, 67));
        label4 = new QLabel(CheckAnimal);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(400, 431, 217, 55));
        label5 = new QLabel(CheckAnimal);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(-4, 192, 1042, 429));
        label6 = new QLabel(CheckAnimal);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(-9, 252, 1046, 356));
        label8 = new QLabel(CheckAnimal);
        label8->setObjectName(QString::fromUtf8("label8"));
        label8->setGeometry(QRect(0, 0, 1024, 768));
        label7 = new QLabel(CheckAnimal);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(-9, 269, 1035, 317));
        label8->raise();
        label1->raise();
        label->raise();
        label2->raise();
        label3->raise();
        label4->raise();
        label5->raise();
        label6->raise();
        label7->raise();
        usersAnimal->raise();
        pushButton->raise();

        retranslateUi(CheckAnimal);

        QMetaObject::connectSlotsByName(CheckAnimal);
    } // setupUi

    void retranslateUi(QDialog *CheckAnimal)
    {
        CheckAnimal->setWindowTitle(QApplication::translate("CheckAnimal", "Dialog", nullptr));
        label->setText(QApplication::translate("CheckAnimal", "<html><head><body><p align=\"center\"><span style=\"font-family:'Comic Sans MS'; font-size:30pt;color:#c85836;\">\320\226\320\270\320\262\320\276\321\202\320\275\320\276\320\265 \320\275\320\265 \320\275\320\260\320\271\320\264\320\265\320\275\320\276.<br>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\265\320\263\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\264\320\273\321\217<br> \320\264\320\260\320\273\321\214\320\275\320\265\320\271\321\210\320\265\320\263\320\276 \320\260\320\275\320\260\320\273\320\270\320\267\320\260</span></p></body></head></html>\n"
"\n"
"\n"
"", nullptr));
        usersAnimal->setText(QString());
        pushButton->setText(QApplication::translate("CheckAnimal", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
        label8->setText(QString());
        label7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CheckAnimal: public Ui_CheckAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKANIMAL_H
