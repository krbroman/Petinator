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
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *AddNewAnimal)
    {
        if (AddNewAnimal->objectName().isEmpty())
            AddNewAnimal->setObjectName(QString::fromUtf8("AddNewAnimal"));
        AddNewAnimal->resize(1024, 768);
        pushButton_Yes = new QPushButton(AddNewAnimal);
        pushButton_Yes->setObjectName(QString::fromUtf8("pushButton_Yes"));
        pushButton_Yes->setGeometry(QRect(491, 480, 131, 61));
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
        label = new QLabel(AddNewAnimal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(207, 200, 351, 110));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        pushButton_No = new QPushButton(AddNewAnimal);
        pushButton_No->setObjectName(QString::fromUtf8("pushButton_No"));
        pushButton_No->setGeometry(QRect(661, 480, 131, 61));
        pushButton_No->setFont(font);
        pushButton_No->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"color:rgba(204, 57, 31, 196);\n"
"font-size:33pt;\n"
"font:\"Arial Rounded MT Bold\";"));
        label_2 = new QLabel(AddNewAnimal);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(443, 330, 390, 128));
        label_2->setFont(font1);
        label_3 = new QLabel(AddNewAnimal);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 1024, 768));
        label_4 = new QLabel(AddNewAnimal);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(177, 188, 411, 134));
        label_5 = new QLabel(AddNewAnimal);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(424, 331, 411, 134));
        label_6 = new QLabel(AddNewAnimal);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(658, 481, 137, 61));
        label_7 = new QLabel(AddNewAnimal);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(489, 481, 137, 61));
        label_8 = new QLabel(AddNewAnimal);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(-21, 27, 1048, 578));
        label_9 = new QLabel(AddNewAnimal);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(-20, 36, 1047, 562));
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label->raise();
        label_2->raise();
        pushButton_Yes->raise();
        pushButton_No->raise();

        retranslateUi(AddNewAnimal);

        QMetaObject::connectSlotsByName(AddNewAnimal);
    } // setupUi

    void retranslateUi(QDialog *AddNewAnimal)
    {
        AddNewAnimal->setWindowTitle(QApplication::translate("AddNewAnimal", "Dialog", nullptr));
        pushButton_Yes->setText(QApplication::translate("AddNewAnimal", "\320\224\320\260", nullptr));
        label->setText(QApplication::translate("AddNewAnimal", "<html><head/><body><p align=\"center\"><span style=\" font-family:'Comic Sans MS'; color:#c85836;\">\320\226\320\270\320\262\320\276\321\202\320\275\320\276\320\265 \320\275\320\265 \320\275\320\260\320\271\320\264\320\265\320\275\320\276 <br/>\320\262 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205.</span></p></body></html>", nullptr));
        pushButton_No->setText(QApplication::translate("AddNewAnimal", "\320\235\320\265\321\202", nullptr));
        label_2->setText(QApplication::translate("AddNewAnimal", "<html><head/><body>\n"
"<p align = \"center\"><span style=\" font-family:'Comic Sans MS'; font-size:30pt; color:#C85836;\">\320\245\320\276\321\202\320\270\321\202\320\265 \320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\265<br/>\320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205?</p>\n"
"</span></body></head></html>\n"
"\n"
"\n"
"", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddNewAnimal: public Ui_AddNewAnimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWANIMAL_H
