/********************************************************************************
** Form generated from reading UI file 'guess.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
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

    void setupUi(QDialog *Guess)
    {
        if (Guess->objectName().isEmpty())
            Guess->setObjectName(QString::fromUtf8("Guess"));
        Guess->resize(800, 600);
        pushButton_Yes = new QPushButton(Guess);
        pushButton_Yes->setObjectName(QString::fromUtf8("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(50, 440, 201, 121));
        QFont font;
        font.setPointSize(20);
        pushButton_Yes->setFont(font);
        pushButton_No = new QPushButton(Guess);
        pushButton_No->setObjectName(QString::fromUtf8("pushButton_No"));
        pushButton_No->setGeometry(QRect(250, 440, 201, 121));
        pushButton_No->setFont(font);
        label = new QLabel(Guess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 290, 161, 91));
        label->setFont(font);
        Suggestion = new QLabel(Guess);
        Suggestion->setObjectName(QString::fromUtf8("Suggestion"));
        Suggestion->setGeometry(QRect(40, 80, 591, 131));
        Suggestion->setFont(font);

        retranslateUi(Guess);

        QMetaObject::connectSlotsByName(Guess);
    } // setupUi

    void retranslateUi(QDialog *Guess)
    {
        Guess->setWindowTitle(QApplication::translate("Guess", "Dialog", nullptr));
        pushButton_Yes->setText(QApplication::translate("Guess", "\320\224\320\260", nullptr));
        pushButton_No->setText(QApplication::translate("Guess", "\320\235\320\265\321\202", nullptr));
        label->setText(QApplication::translate("Guess", "\320\257 \320\264\321\203\320\274\320\260\321\216, \n"
"\321\207\321\202\320\276 \321\215\321\202\320\276...", nullptr));
        Suggestion->setText(QApplication::translate("Guess", "/*\320\237\321\200\320\265\320\264\320\277\320\276\320\273\320\260\320\263\320\260\320\265\320\274\320\276\320\265 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265*/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Guess: public Ui_Guess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESS_H
