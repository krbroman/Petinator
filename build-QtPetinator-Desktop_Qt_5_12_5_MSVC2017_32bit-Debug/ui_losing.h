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
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;

    void setupUi(QDialog *Losing)
    {
        if (Losing->objectName().isEmpty())
            Losing->setObjectName(QString::fromUtf8("Losing"));
        Losing->resize(1024, 768);
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
        label1 = new QLabel(Losing);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(537, 237, 280, 281));
        label2 = new QLabel(Losing);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(188, 161, 384, 185));
        label3 = new QLabel(Losing);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(221, 624, 263, 86));
        label4 = new QLabel(Losing);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(547, 624, 280, 86));
        label5 = new QLabel(Losing);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(-20, 399, 1044, 373));
        label6 = new QLabel(Losing);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(-3, 391, 1025, 376));
        label7 = new QLabel(Losing);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(0, 0, 1024, 768));
        pushButton_Play->raise();
        pushButton_Exit->raise();
        label7->raise();
        label5->raise();
        label6->raise();
        label3->raise();
        label4->raise();
        label1->raise();
        label2->raise();
        label->raise();

        retranslateUi(Losing);

        QMetaObject::connectSlotsByName(Losing);
    } // setupUi

    void retranslateUi(QDialog *Losing)
    {
        Losing->setWindowTitle(QApplication::translate("Losing", "Dialog", nullptr));
        pushButton_Play->setText(QApplication::translate("Losing", "\320\230\320\263\321\200\320\260\321\202\321\214 \320\265\321\211\320\265 \321\200\320\260\320\267", nullptr));
        pushButton_Exit->setText(QApplication::translate("Losing", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QApplication::translate("Losing", "\320\257 \320\277\321\200\320\276\320\270\320\263\321\200\320\260\320\273 :(", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
        label7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Losing: public Ui_Losing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSING_H
