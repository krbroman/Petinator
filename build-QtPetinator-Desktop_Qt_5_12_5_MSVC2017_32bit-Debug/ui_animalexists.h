/********************************************************************************
** Form generated from reading UI file 'animalexists.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMALEXISTS_H
#define UI_ANIMALEXISTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AnimalExists
{
public:
    QLabel *label;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *AnimalExists)
    {
        if (AnimalExists->objectName().isEmpty())
            AnimalExists->setObjectName(QString::fromUtf8("AnimalExists"));
        AnimalExists->resize(800, 600);
        label = new QLabel(AnimalExists);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 130, 601, 191));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        pushButton_Ok = new QPushButton(AnimalExists);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(300, 430, 161, 61));
        QFont font1;
        font1.setPointSize(20);
        pushButton_Ok->setFont(font1);

        retranslateUi(AnimalExists);

        QMetaObject::connectSlotsByName(AnimalExists);
    } // setupUi

    void retranslateUi(QDialog *AnimalExists)
    {
        AnimalExists->setWindowTitle(QApplication::translate("AnimalExists", "Dialog", nullptr));
        label->setText(QApplication::translate("AnimalExists", "\320\226\320\270\320\262\320\276\321\202\320\275\320\276\320\265 \320\262 \320\275\320\260\321\210\320\265\320\271 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\320\265\321\202. \n"
"\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\265\320\263\320\276 \320\275\320\265 \320\277\320\276\320\273\321\203\321\207\320\270\321\202\321\201\321\217", nullptr));
        pushButton_Ok->setText(QApplication::translate("AnimalExists", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnimalExists: public Ui_AnimalExists {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMALEXISTS_H
