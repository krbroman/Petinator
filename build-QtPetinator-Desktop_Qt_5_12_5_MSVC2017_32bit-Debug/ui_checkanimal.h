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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CheckAnimal
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *CheckAnimal)
    {
        if (CheckAnimal->objectName().isEmpty())
            CheckAnimal->setObjectName(QString::fromUtf8("CheckAnimal"));
        CheckAnimal->resize(800, 600);
        label = new QLabel(CheckAnimal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 130, 421, 141));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        textBrowser = new QTextBrowser(CheckAnimal);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(230, 340, 401, 41));
        pushButton = new QPushButton(CheckAnimal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 460, 361, 61));
        QFont font1;
        font1.setPointSize(20);
        pushButton->setFont(font1);

        retranslateUi(CheckAnimal);

        QMetaObject::connectSlotsByName(CheckAnimal);
    } // setupUi

    void retranslateUi(QDialog *CheckAnimal)
    {
        CheckAnimal->setWindowTitle(QApplication::translate("CheckAnimal", "Dialog", nullptr));
        label->setText(QApplication::translate("CheckAnimal", "\320\234\321\213 \320\275\320\265 \320\275\320\260\321\210\320\273\320\270 \320\262\320\260\321\210\320\265 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265.\n"
"\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\265\320\263\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \n"
"\320\264\320\273\321\217 \320\264\320\260\320\273\321\214\320\275\320\265\320\271\321\210\320\265\320\263\320\276 \320\260\320\275\320\260\320\273\320\270\320\267\320\260.", nullptr));
        pushButton->setText(QApplication::translate("CheckAnimal", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckAnimal: public Ui_CheckAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKANIMAL_H
