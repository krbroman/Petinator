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
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;

    void setupUi(QDialog *SecondSlide)
    {
        if (SecondSlide->objectName().isEmpty())
            SecondSlide->setObjectName(QString::fromUtf8("SecondSlide"));
        SecondSlide->resize(1024, 768);
        label = new QLabel(SecondSlide);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 87, 425, 161));
        QFont font;
        font.setPointSize(35);
        label->setFont(font);
        pushButton = new QPushButton(SecondSlide);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(389, 569, 271, 91));
        QFont font1;
        font1.setPointSize(45);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background:rgba(255, 255, 255, 0);\n"
"color:rgba(204, 57, 31, 196);\n"
"font-size:45pt;\n"
"font:\"Arial Rounded MT Bold\";"));
        label2 = new QLabel(SecondSlide);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(0, 0, 1024, 768));
        label3 = new QLabel(SecondSlide);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(361, 56, 451, 237));
        label4 = new QLabel(SecondSlide);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(164, 200, 237, 250));
        label5 = new QLabel(SecondSlide);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(-19, 334, 1173, 300));
        label6 = new QLabel(SecondSlide);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(380, 564, 295, 108));
        label2->raise();
        label4->raise();
        label5->raise();
        label3->raise();
        label->raise();
        label6->raise();
        pushButton->raise();

        retranslateUi(SecondSlide);

        QMetaObject::connectSlotsByName(SecondSlide);
    } // setupUi

    void retranslateUi(QDialog *SecondSlide)
    {
        SecondSlide->setWindowTitle(QApplication::translate("SecondSlide", "Petinator", nullptr));
        label->setText(QApplication::translate("SecondSlide", "<html><head/><body><p align=\"center\"><span style=\" font-family:'Arial Rounded MT Bold'; font-size:30pt; color:#fceedf;\">\320\227\320\260\320\263\320\260\320\264\320\260\320\271\321\202\320\265 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265. <br/>\320\257 \320\277\320\276\321\201\321\202\320\260\321\200\320\260\321\216\321\201\321\214 \320\265\320\263\320\276 <br/> \320\276\321\202\320\263\320\260\320\264\320\260\321\202\321\214</span><span style=\" font-size:64pt;\"/></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("SecondSlide", "<!DOCTYPE html>\n"
"<html>\n"
"<head>\n"
"<meta charset=\"utf-8\">\n"
" </head>\n"
"<body>\n"
"<div class=\"layer1\">\n"
"<font size=\"45\" color=\"#C85836\" face=\"Arial Rounded MT Bold\">\320\224\320\260\320\273\320\265\320\265</font>\n"
"</div>\n"
"</body>\n"
"</html>\n"
"", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("SecondSlide", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondSlide: public Ui_SecondSlide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDSLIDE_H
