/********************************************************************************
** Form generated from reading UI file 'losing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSING_H
#define UI_LOSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Losing
{
public:
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Exit;
    QLabel *label;

    void setupUi(QDialog *Losing)
    {
        if (Losing->objectName().isEmpty())
            Losing->setObjectName(QString::fromUtf8("Losing"));
        Losing->resize(1280, 800);
        pushButton_Play = new QPushButton(Losing);
        pushButton_Play->setObjectName(QString::fromUtf8("pushButton_Play"));
        pushButton_Play->setGeometry(QRect(600, 540, 280, 100));
        QFont font;
        font.setPointSize(16);
        pushButton_Play->setFont(font);
        pushButton_Exit = new QPushButton(Losing);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(210, 540, 280, 100));
        pushButton_Exit->setFont(font);
        label = new QLabel(Losing);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 451, 161));
        QFont font1;
        font1.setPointSize(40);
        label->setFont(font1);

        retranslateUi(Losing);

        QMetaObject::connectSlotsByName(Losing);
    } // setupUi

    void retranslateUi(QDialog *Losing)
    {
        Losing->setWindowTitle(QApplication::translate("Losing", "Dialog", nullptr));
        pushButton_Play->setText(QApplication::translate("Losing", "\320\230\320\263\321\200\320\260\321\202\321\214 \320\265\321\211\320\265 \321\200\320\260\320\267", nullptr));
        pushButton_Exit->setText(QApplication::translate("Losing", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QApplication::translate("Losing", "\320\257 \320\277\321\200\320\276\320\270\320\263\321\200\320\260\320\273 :(", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Losing: public Ui_Losing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSING_H
