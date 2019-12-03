/********************************************************************************
** Form generated from reading UI file 'secondslide.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDSLIDE_H
#define UI_SECONDSLIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecondSlide
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *SecondSlide)
    {
        if (SecondSlide->objectName().isEmpty())
            SecondSlide->setObjectName(QString::fromUtf8("SecondSlide"));
        SecondSlide->resize(1280, 800);
        label = new QLabel(SecondSlide);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 60, 691, 221));
        QFont font;
        font.setPointSize(35);
        label->setFont(font);
        pushButton = new QPushButton(SecondSlide);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 590, 280, 100));
        QFont font1;
        font1.setPointSize(24);
        pushButton->setFont(font1);

        retranslateUi(SecondSlide);

        QMetaObject::connectSlotsByName(SecondSlide);
    } // setupUi

    void retranslateUi(QDialog *SecondSlide)
    {
        SecondSlide->setWindowTitle(QApplication::translate("SecondSlide", "Petinator", nullptr));
        label->setText(QApplication::translate("SecondSlide", "<body><p align=\"center\">\320\227\320\260\320\263\320\260\320\264\320\260\320\271\321\202\320\265 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265. <br/>\320\257 \320\277\320\276\321\201\321\202\320\260\321\200\320\260\321\216\321\201\321\214 \320\265\320\263\320\276 <br/> \320\276\321\202\320\263\320\260\320\264\320\260\321\202\321\214</p></body>", nullptr));
        pushButton->setText(QApplication::translate("SecondSlide", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondSlide: public Ui_SecondSlide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDSLIDE_H
