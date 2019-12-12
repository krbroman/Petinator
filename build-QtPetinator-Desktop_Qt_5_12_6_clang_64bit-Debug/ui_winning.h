/********************************************************************************
** Form generated from reading UI file 'winning.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINNING_H
#define UI_WINNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Winning
{
public:
    QLabel *label;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_Play;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;

    void setupUi(QDialog *Winning)
    {
        if (Winning->objectName().isEmpty())
            Winning->setObjectName(QString::fromUtf8("Winning"));
        Winning->resize(1024, 768);
        label = new QLabel(Winning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 167, 302, 125));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton_Exit = new QPushButton(Winning);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(538, 617, 280, 100));
        QFont font1;
        font1.setPointSize(33);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_Exit->setFont(font1);
        pushButton_Exit->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"color:rgba(204, 57, 31, 196);\n"
"font-size:33pt;\n"
"font:\"Arial Rounded MT Bold\";"));
        pushButton_Play = new QPushButton(Winning);
        pushButton_Play->setObjectName(QString::fromUtf8("pushButton_Play"));
        pushButton_Play->setGeometry(QRect(210, 615, 280, 100));
        pushButton_Play->setFont(font1);
        pushButton_Play->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"color:rgba(204, 57, 31, 196);\n"
"font-size:33pt;\n"
"font:\"Arial Rounded MT Bold\";"));
        label1 = new QLabel(Winning);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(547, 624, 280, 86));
        label2 = new QLabel(Winning);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(221, 624, 263, 86));
        label3 = new QLabel(Winning);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(0, 0, 1024, 768));
        label4 = new QLabel(Winning);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(-20, 399, 1044, 373));
        label5 = new QLabel(Winning);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(-3, 391, 1025, 376));
        label6 = new QLabel(Winning);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(549, 199, 278, 277));
        label7 = new QLabel(Winning);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(227, 143, 349, 181));
        label3->raise();
        label1->raise();
        label2->raise();
        label4->raise();
        label5->raise();
        label6->raise();
        label7->raise();
        label->raise();
        pushButton_Exit->raise();
        pushButton_Play->raise();

        retranslateUi(Winning);

        QMetaObject::connectSlotsByName(Winning);
    } // setupUi

    void retranslateUi(QDialog *Winning)
    {
        Winning->setWindowTitle(QApplication::translate("Winning", "Dialog", nullptr));
        label->setText(QApplication::translate("Winning", "<html>\n"
"<head/>\n"
"<body>\n"
"<span style=\" font-family:'Comic Sans MS'; font-size:50pt; color:#FFF8EA;\">\n"
"<p align=\"center\">\n"
"\320\257 \321\203\320\263\320\260\320\264\320\260\320\273\n"
"</span>\n"
"</p>\n"
"</body>\n"
"</html>\n"
"", nullptr));
        pushButton_Exit->setText(QApplication::translate("Winning", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton_Play->setText(QApplication::translate("Winning", "\320\230\320\263\321\200\320\260\321\202\321\214 \320\265\321\211\320\265 \321\200\320\260\320\267", nullptr));
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
    class Winning: public Ui_Winning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINNING_H
