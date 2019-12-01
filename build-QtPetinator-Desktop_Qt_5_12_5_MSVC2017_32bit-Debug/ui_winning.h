/********************************************************************************
** Form generated from reading UI file 'winning.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Winning)
    {
        if (Winning->objectName().isEmpty())
            Winning->setObjectName(QString::fromUtf8("Winning"));
        Winning->resize(800, 600);
        label = new QLabel(Winning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 130, 351, 161));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton = new QPushButton(Winning);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 470, 181, 81));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Winning);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 470, 291, 81));
        pushButton_2->setFont(font1);

        retranslateUi(Winning);

        QMetaObject::connectSlotsByName(Winning);
    } // setupUi

    void retranslateUi(QDialog *Winning)
    {
        Winning->setWindowTitle(QApplication::translate("Winning", "Dialog", nullptr));
        label->setText(QApplication::translate("Winning", "\320\257 \321\203\320\263\320\260\320\264\320\260\320\273!", nullptr));
        pushButton->setText(QApplication::translate("Winning", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton_2->setText(QApplication::translate("Winning", "\320\230\320\263\321\200\320\260\321\202\321\214 \320\265\321\211\320\265 \321\200\320\260\320\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Winning: public Ui_Winning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINNING_H
