/********************************************************************************
** Form generated from reading UI file 'guesslast.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESSLAST_H
#define UI_GUESSLAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GuessLast
{
public:
    QLabel *label;
    QPushButton *pushButton_No;
    QLabel *Suggestion;
    QPushButton *pushButton_Yes;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;

    void setupUi(QDialog *GuessLast)
    {
        if (GuessLast->objectName().isEmpty())
            GuessLast->setObjectName(QString::fromUtf8("GuessLast"));
        GuessLast->resize(1024, 768);
        label = new QLabel(GuessLast);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 480, 221, 131));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_No = new QPushButton(GuessLast);
        pushButton_No->setObjectName(QString::fromUtf8("pushButton_No"));
        pushButton_No->setGeometry(QRect(530, 347, 161, 71));
        QFont font1;
        font1.setPointSize(33);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_No->setFont(font1);
        pushButton_No->setStyleSheet(QString::fromUtf8("font: \"Comic Sans MS\";\n"
"color: rgba(204, 57, 31, 196);\n"
"background: rgba(255, 255, 255, 0);\n"
"font-size: 33pt;\n"
""));
        Suggestion = new QLabel(GuessLast);
        Suggestion->setObjectName(QString::fromUtf8("Suggestion"));
        Suggestion->setGeometry(QRect(450, 50, 771, 131));
        Suggestion->setFont(font1);
        Suggestion->setStyleSheet(QString::fromUtf8("font: \"Comic Sans MS\";\n"
"color: rgba(204, 57, 31, 196);\n"
"font-size: 33pt;\n"
"text-align: right;"));
        pushButton_Yes = new QPushButton(GuessLast);
        pushButton_Yes->setObjectName(QString::fromUtf8("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(365, 347, 151, 71));
        pushButton_Yes->setFont(font1);
        pushButton_Yes->setStyleSheet(QString::fromUtf8("font: \"Comic Sans MS\";\n"
"color: rgba(204, 57, 31, 196);\n"
"background: rgba(255, 255, 255, 0);\n"
"font-size: 33pt;"));
        label1 = new QLabel(GuessLast);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(742, 490, 294, 266));
        label2 = new QLabel(GuessLast);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(376, 353, 137, 61));
        label3 = new QLabel(GuessLast);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(-9, 2, 1009, 627));
        label4 = new QLabel(GuessLast);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(545, 353, 137, 61));
        label5 = new QLabel(GuessLast);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(-2, -2, 999, 592));
        label6 = new QLabel(GuessLast);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(0, 0, 1024, 768));
        label7 = new QLabel(GuessLast);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(463, 462, 301, 181));
        label6->raise();
        label1->raise();
        label2->raise();
        label3->raise();
        label4->raise();
        label5->raise();
        label7->raise();
        label->raise();
        pushButton_No->raise();
        pushButton_Yes->raise();
        Suggestion->raise();

        retranslateUi(GuessLast);

        QMetaObject::connectSlotsByName(GuessLast);
    } // setupUi

    void retranslateUi(QDialog *GuessLast)
    {
        GuessLast->setWindowTitle(QApplication::translate("GuessLast", "Dialog", nullptr));
        label->setText(QApplication::translate("GuessLast", "<html><head/><body><p align=\"center\"><span style=\" font-family:'Arial Rounded MT Bold'; font-size:22pt; color:#fff8ea;\">\320\257 \320\264\321\203\320\274\320\260\321\216, <br/>\321\207\321\202\320\276 \321\215\321\202\320\276... </span></p></body></html>", nullptr));
        pushButton_No->setText(QApplication::translate("GuessLast", "\320\235\320\265\321\202", nullptr));
        Suggestion->setText(QApplication::translate("GuessLast", "<!DOCTYPE>\n"
"<html>\n"
"<head>\n"
"<style>\n"
".text{\n"
"text-align:  center;\n"
"}\n"
"</style>\n"
"</head>\n"
"<body>\n"
"	<div class=\"text\"><p>/*\320\237\321\200\320\265\320\264\320\277\320\276\320\273\320\260\320\263\320\260\320\265\320\274\320\276\320\265 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265*/</p></div>\n"
"</body>\n"
"</html>", nullptr));
        pushButton_Yes->setText(QApplication::translate("GuessLast", "\320\224\320\260", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
        label7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GuessLast: public Ui_GuessLast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESSLAST_H