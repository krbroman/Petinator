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
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *Losing)
    {
        if (Losing->objectName().isEmpty())
            Losing->setObjectName(QString::fromUtf8("Losing"));
        Losing->resize(800, 600);
        pushButton_3 = new QPushButton(Losing);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 460, 291, 81));
        QFont font;
        font.setPointSize(16);
        pushButton_3->setFont(font);
        pushButton = new QPushButton(Losing);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 460, 181, 81));
        pushButton->setFont(font);
        label = new QLabel(Losing);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 170, 351, 161));
        QFont font1;
        font1.setPointSize(40);
        label->setFont(font1);

        retranslateUi(Losing);

        QMetaObject::connectSlotsByName(Losing);
    } // setupUi

    void retranslateUi(QDialog *Losing)
    {
        Losing->setWindowTitle(QApplication::translate("Losing", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("Losing", "\320\230\320\263\321\200\320\260\321\202\321\214 \320\265\321\211\320\265 \321\200\320\260\320\267", nullptr));
        pushButton->setText(QApplication::translate("Losing", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QApplication::translate("Losing", "\320\257 \321\203\320\263\320\260\320\264\320\260\320\273!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Losing: public Ui_Losing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSING_H
