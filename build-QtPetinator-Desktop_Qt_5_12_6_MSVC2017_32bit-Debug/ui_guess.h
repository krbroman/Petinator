/********************************************************************************
** Form generated from reading UI file 'guess.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESS_H
#define UI_GUESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Guess
{
public:
    QPushButton *pushButton_Yes;
    QPushButton *pushButton_No;
    QLabel *label;
    QLabel *Suggestion;
    QLabel *label1;
    QLabel *label3;
    QLabel *label2;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;

    void setupUi(QDialog *Guess)
    {
        if (Guess->objectName().isEmpty())
            Guess->setObjectName(QString::fromUtf8("Guess"));
        Guess->resize(1024, 768);
        pushButton_Yes = new QPushButton(Guess);
        pushButton_Yes->setObjectName(QString::fromUtf8("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(380, 350, 121, 61));
        QFont font;
        font.setPointSize(33);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton_Yes->setFont(font);
        pushButton_Yes->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"color:rgba(204, 57, 31, 196);\n"
"font-size:33pt;\n"
"font:\"Arial Rounded MT Bold\";"));
        pushButton_No = new QPushButton(Guess);
        pushButton_No->setObjectName(QString::fromUtf8("pushButton_No"));
        pushButton_No->setGeometry(QRect(555, 350, 111, 61));
        pushButton_No->setFont(font);
        pushButton_No->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"color:rgba(204, 57, 31, 196);\n"
"font-size:33pt;\n"
"font:\"Arial Rounded MT Bold\";"));
        label = new QLabel(Guess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 496, 220, 105));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        Suggestion = new QLabel(Guess);
        Suggestion->setObjectName(QString::fromUtf8("Suggestion"));
        Suggestion->setGeometry(QRect(490, 60, 661, 131));
        Suggestion->setFont(font);
        Suggestion->setStyleSheet(QString::fromUtf8("font: \"Comic Sans MS\";\n"
"color: rgba(204, 57, 31, 196);\n"
"font-size: 33pt;\n"
"text-align: right;"));
        label1 = new QLabel(Guess);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(742, 490, 294, 266));
        label3 = new QLabel(Guess);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(-9, 2, 1009, 627));
        label2 = new QLabel(Guess);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(376, 353, 137, 61));
        label4 = new QLabel(Guess);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(545, 353, 137, 61));
        label5 = new QLabel(Guess);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(-2, -2, 999, 592));
        label6 = new QLabel(Guess);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(0, 0, 1024, 768));
        label7 = new QLabel(Guess);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(463, 462, 301, 181));
        label6->raise();
        label4->raise();
        label2->raise();
        label5->raise();
        label3->raise();
        label1->raise();
        label7->raise();
        Suggestion->raise();
        label->raise();
        pushButton_No->raise();
        pushButton_Yes->raise();

        retranslateUi(Guess);

        QMetaObject::connectSlotsByName(Guess);
    } // setupUi

    void retranslateUi(QDialog *Guess)
    {
        Guess->setWindowTitle(QApplication::translate("Guess", "Dialog", nullptr));
        pushButton_Yes->setText(QApplication::translate("Guess", "\320\224\320\260", nullptr));
        pushButton_No->setText(QApplication::translate("Guess", "\320\235\320\265\321\202", nullptr));
        label->setText(QApplication::translate("Guess", "<html>\n"
"<head/>\n"
"<body>\n"
"<span style=\" font-family:'Arial Rounded MT Bold'; font-size:35pt; color:#FFF8EA;\">\n"
"<p align=\"center\">\320\257 \320\264\321\203\320\274\320\260\321\216, <br/>\321\207\321\202\320\276 \321\215\321\202\320\276...\n"
"</span>\n"
"</p>\n"
"</body>\n"
"</html>\n"
"", nullptr));
#ifndef QT_NO_TOOLTIP
        Suggestion->setToolTip(QApplication::translate("Guess", "text-align: center;", nullptr));
#endif // QT_NO_TOOLTIP
        Suggestion->setText(QApplication::translate("Guess", "<!DOCTYPE>\n"
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
        label1->setText(QString());
        label3->setText(QString());
        label2->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
        label7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Guess: public Ui_Guess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESS_H