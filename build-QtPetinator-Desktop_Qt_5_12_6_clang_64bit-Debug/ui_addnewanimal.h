/********************************************************************************
** Form generated from reading UI file 'addnewanimal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWANIMAL_H
#define UI_ADDNEWANIMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddNewAnimal
{
public:
    QPushButton *pushButton_Yes;
    QLabel *label;
    QPushButton *pushButton_No;
    QLabel *label_2;

    void setupUi(QDialog *AddNewAnimal)
    {
        if (AddNewAnimal->objectName().isEmpty())
            AddNewAnimal->setObjectName(QString::fromUtf8("AddNewAnimal"));
        AddNewAnimal->resize(1280, 800);
        pushButton_Yes = new QPushButton(AddNewAnimal);
        pushButton_Yes->setObjectName(QString::fromUtf8("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(220, 570, 280, 100));
        QFont font;
        font.setPointSize(20);
        pushButton_Yes->setFont(font);
        label = new QLabel(AddNewAnimal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 170, 601, 171));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        pushButton_No = new QPushButton(AddNewAnimal);
        pushButton_No->setObjectName(QString::fromUtf8("pushButton_No"));
        pushButton_No->setGeometry(QRect(510, 570, 280, 100));
        pushButton_No->setFont(font);
        label_2 = new QLabel(AddNewAnimal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 250, 521, 261));
        label_2->setFont(font1);

        retranslateUi(AddNewAnimal);

        QMetaObject::connectSlotsByName(AddNewAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddNewAnimal)
    {
        AddNewAnimal->setWindowTitle(QApplication::translate("AddNewAnimal", "Dialog", nullptr));
        pushButton_Yes->setText(QApplication::translate("AddNewAnimal", "\320\224\320\260", nullptr));
        label->setText(QApplication::translate("AddNewAnimal", "<p align=\"center\">\320\226\320\270\320\262\320\276\321\202\320\275\320\276\320\265 \320\275\320\265 \320\275\320\260\320\271\320\264\320\265\320\275\320\276 <br/>\320\262 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205</p>", nullptr));
        pushButton_No->setText(QApplication::translate("AddNewAnimal", "\320\235\320\265\321\202", nullptr));
        label_2->setText(QApplication::translate("AddNewAnimal", "<p align = \"center\">\320\245\320\276\321\202\320\270\321\202\320\265 \320\265\320\263\320\276 \321\202\321\203\320\264\320\260 <br/>\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214?</p>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewAnimal: public Ui_AddNewAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWANIMAL_H
