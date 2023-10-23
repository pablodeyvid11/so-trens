/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *trem_1;
    QLabel *trem_2;
    QLabel *trem_4;
    QLabel *trem_3;
    QLabel *trem_5;
    QLabel *label;
    QSlider *sliderT1;
    QSlider *sliderT2;
    QSlider *sliderT3;
    QSlider *sliderT5;
    QSlider *sliderT4;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1140, 443);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        trem_1 = new QLabel(centralWidget);
        trem_1->setObjectName("trem_1");
        trem_1->setGeometry(QRect(390, 60, 35, 35));
        trem_1->setStyleSheet(QString::fromUtf8("background-image: url(:/T1.png);"));
        trem_2 = new QLabel(centralWidget);
        trem_2->setObjectName("trem_2");
        trem_2->setGeometry(QRect(660, 60, 35, 35));
        trem_2->setStyleSheet(QString::fromUtf8("background-image: url(:/T2.png);"));
        trem_4 = new QLabel(centralWidget);
        trem_4->setObjectName("trem_4");
        trem_4->setGeometry(QRect(520, 200, 31, 31));
        trem_4->setStyleSheet(QString::fromUtf8("background-image: url(:/T4.png);"));
        trem_3 = new QLabel(centralWidget);
        trem_3->setObjectName("trem_3");
        trem_3->setGeometry(QRect(250, 200, 31, 31));
        trem_3->setStyleSheet(QString::fromUtf8("background-image: url(:/T3.png);"));
        trem_5 = new QLabel(centralWidget);
        trem_5->setObjectName("trem_5");
        trem_5->setGeometry(QRect(800, 200, 31, 31));
        trem_5->setStyleSheet(QString::fromUtf8("background-image: url(:/T5.png);"));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1141, 401));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/background.png);"));
        sliderT1 = new QSlider(centralWidget);
        sliderT1->setObjectName("sliderT1");
        sliderT1->setGeometry(QRect(30, 110, 160, 16));
        sliderT1->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #0000;\n"
"    height: 8px;\n"
"    background: red;\n"
"    margin: 2px 0;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background:  rgb(240, 0, 0);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}"));
        sliderT1->setOrientation(Qt::Horizontal);
        sliderT2 = new QSlider(centralWidget);
        sliderT2->setObjectName("sliderT2");
        sliderT2->setGeometry(QRect(30, 180, 160, 16));
        sliderT2->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #0000;\n"
"    height: 8px;\n"
"    background: rgb(220, 3, 205);\n"
"    margin: 2px 0;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background:  rgb(220, 3, 205);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}"));
        sliderT2->setOrientation(Qt::Horizontal);
        sliderT3 = new QSlider(centralWidget);
        sliderT3->setObjectName("sliderT3");
        sliderT3->setGeometry(QRect(30, 240, 160, 16));
        sliderT3->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #0000;\n"
"    height: 8px;\n"
"    background: green;\n"
"    margin: 2px 0;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background:  green;\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}"));
        sliderT3->setOrientation(Qt::Horizontal);
        sliderT5 = new QSlider(centralWidget);
        sliderT5->setObjectName("sliderT5");
        sliderT5->setGeometry(QRect(30, 360, 160, 16));
        sliderT5->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #0000;\n"
"    height: 8px;\n"
"    background: blue;\n"
"    margin: 2px 0;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background: blue;\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}"));
        sliderT5->setOrientation(Qt::Horizontal);
        sliderT4 = new QSlider(centralWidget);
        sliderT4->setObjectName("sliderT4");
        sliderT4->setGeometry(QRect(30, 300, 160, 16));
        sliderT4->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #0000;\n"
"    height: 8px;\n"
"    background: yellow;\n"
"    margin: 2px 0;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background:  yellow;\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}"));
        sliderT4->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        trem_1->raise();
        trem_2->raise();
        trem_4->raise();
        trem_3->raise();
        trem_5->raise();
        sliderT1->raise();
        sliderT2->raise();
        sliderT3->raise();
        sliderT5->raise();
        sliderT4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1140, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pablo Paiva - Sistemas Operacionais", nullptr));
        trem_1->setText(QString());
        trem_2->setText(QString());
        trem_4->setText(QString());
        trem_3->setText(QString());
        trem_5->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
