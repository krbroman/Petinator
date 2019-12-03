/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_Now;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(1280, 800);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 230, 641, 121));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 500, 280, 100));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 500, 280, 100));
        pushButton_2->setFont(font);
        pushButton_Now = new QPushButton(centralwidget);
        pushButton_Now->setObjectName(QString::fromUtf8("pushButton_Now"));
        pushButton_Now->setGeometry(QRect(460, 630, 280, 100));
        QFont font1;
        font1.setPointSize(16);
        pushButton_Now->setFont(font1);
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 26));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "Petinator", nullptr));
        label->setText(QApplication::translate("MainWindow2", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("MainWindow2", "\320\235\320\265\321\202", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow2", "\320\224\320\260", nullptr));
        pushButton_Now->setText(QApplication::translate("MainWindow2", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265 \n"
"\321\201\320\265\320\271\321\207\320\260\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
