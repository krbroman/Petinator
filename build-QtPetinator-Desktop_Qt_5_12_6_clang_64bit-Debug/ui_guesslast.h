/********************************************************************************
** Form generated from reading UI file 'guesslast.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
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

    void setupUi(QDialog *GuessLast)
    {
        if (GuessLast->objectName().isEmpty())
            GuessLast->setObjectName(QString::fromUtf8("GuessLast"));
        GuessLast->resize(1280, 800);
        label = new QLabel(GuessLast);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(580, 260, 161, 91));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_No = new QPushButton(GuessLast);
        pushButton_No->setObjectName(QString::fromUtf8("pushButton_No"));
        pushButton_No->setGeometry(QRect(280, 410, 201, 121));
        pushButton_No->setFont(font);
        Suggestion = new QLabel(GuessLast);
        Suggestion->setObjectName(QString::fromUtf8("Suggestion"));
        Suggestion->setGeometry(QRect(70, 50, 591, 131));
        Suggestion->setFont(font);
        pushButton_Yes = new QPushButton(GuessLast);
        pushButton_Yes->setObjectName(QString::fromUtf8("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(80, 410, 201, 121));
        pushButton_Yes->setFont(font);

        retranslateUi(GuessLast);

        QMetaObject::connectSlotsByName(GuessLast);
    } // setupUi

    void retranslateUi(QDialog *GuessLast)
    {
        GuessLast->setWindowTitle(QApplication::translate("GuessLast", "Dialog", nullptr));
        label->setText(QApplication::translate("GuessLast", "\320\257 \320\264\321\203\320\274\320\260\321\216, \n"
"\321\207\321\202\320\276 \321\215\321\202\320\276...", nullptr));
        pushButton_No->setText(QApplication::translate("GuessLast", "\320\235\320\265\321\202", nullptr));
        Suggestion->setText(QApplication::translate("GuessLast", "/*\320\237\321\200\320\265\320\264\320\277\320\276\320\273\320\260\320\263\320\260\320\265\320\274\320\276\320\265 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265*/", nullptr));
        pushButton_Yes->setText(QApplication::translate("GuessLast", "\320\224\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuessLast: public Ui_GuessLast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESSLAST_H
