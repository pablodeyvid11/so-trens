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
    QLabel *trem_5;
    QLabel *trem_3;
    QLabel *trem_4;
    QLabel *trem_2;
    QLabel *label;
    QSlider *slider_trem1;
    QSlider *slider_trem2;
    QSlider *slider_trem3;
    QSlider *slider_trem5;
    QSlider *slider_trem4;
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
        trem_1->setEnabled(true);
        trem_1->setGeometry(QRect(380, 60, 35, 35));
        trem_1->setMinimumSize(QSize(35, 35));
        trem_1->setStyleSheet(QString::fromUtf8("background-image: url(:/T1.png);"));
        trem_5 = new QLabel(centralWidget);
        trem_5->setObjectName("trem_5");
        trem_5->setGeometry(QRect(790, 200, 35, 35));
        trem_5->setMinimumSize(QSize(35, 35));
        trem_5->setStyleSheet(QString::fromUtf8("background-image: url(:/T2.png);"));
        trem_3 = new QLabel(centralWidget);
        trem_3->setObjectName("trem_3");
        trem_3->setGeometry(QRect(240, 200, 35, 35));
        trem_3->setMinimumSize(QSize(35, 35));
        trem_3->setStyleSheet(QString::fromUtf8("background-image: url(:/T4.png);"));
        trem_4 = new QLabel(centralWidget);
        trem_4->setObjectName("trem_4");
        trem_4->setGeometry(QRect(520, 200, 35, 35));
        trem_4->setMinimumSize(QSize(35, 35));
        trem_4->setStyleSheet(QString::fromUtf8("background-image: url(:/T3.png);"));
        trem_2 = new QLabel(centralWidget);
        trem_2->setObjectName("trem_2");
        trem_2->setGeometry(QRect(660, 60, 35, 35));
        trem_2->setMinimumSize(QSize(35, 35));
        trem_2->setStyleSheet(QString::fromUtf8("background-image: url(:/T5.png);"));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1141, 401));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/background.png);"));
        slider_trem1 = new QSlider(centralWidget);
        slider_trem1->setObjectName("slider_trem1");
        slider_trem1->setGeometry(QRect(30, 110, 160, 16));
        slider_trem1->setCursor(QCursor(Qt::PointingHandCursor));
        slider_trem1->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
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
        slider_trem1->setMinimum(1);
        slider_trem1->setMaximum(200);
        slider_trem1->setValue(100);
        slider_trem1->setOrientation(Qt::Horizontal);
        slider_trem1->setInvertedAppearance(true);
        slider_trem1->setTickPosition(QSlider::TicksBothSides);
        slider_trem1->setTickInterval(40);
        slider_trem2 = new QSlider(centralWidget);
        slider_trem2->setObjectName("slider_trem2");
        slider_trem2->setGeometry(QRect(30, 180, 160, 16));
        slider_trem2->setCursor(QCursor(Qt::PointingHandCursor));
        slider_trem2->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
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
        slider_trem2->setMinimum(1);
        slider_trem2->setMaximum(200);
        slider_trem2->setValue(100);
        slider_trem2->setOrientation(Qt::Horizontal);
        slider_trem2->setInvertedAppearance(true);
        slider_trem2->setTickPosition(QSlider::TicksBothSides);
        slider_trem2->setTickInterval(40);
        slider_trem3 = new QSlider(centralWidget);
        slider_trem3->setObjectName("slider_trem3");
        slider_trem3->setGeometry(QRect(30, 240, 160, 16));
        slider_trem3->setCursor(QCursor(Qt::PointingHandCursor));
        slider_trem3->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
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
        slider_trem3->setMinimum(1);
        slider_trem3->setMaximum(200);
        slider_trem3->setValue(100);
        slider_trem3->setOrientation(Qt::Horizontal);
        slider_trem3->setInvertedAppearance(true);
        slider_trem3->setTickPosition(QSlider::TicksBothSides);
        slider_trem3->setTickInterval(40);
        slider_trem5 = new QSlider(centralWidget);
        slider_trem5->setObjectName("slider_trem5");
        slider_trem5->setGeometry(QRect(30, 360, 160, 16));
        slider_trem5->setCursor(QCursor(Qt::PointingHandCursor));
        slider_trem5->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
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
        slider_trem5->setMinimum(1);
        slider_trem5->setMaximum(200);
        slider_trem5->setValue(100);
        slider_trem5->setOrientation(Qt::Horizontal);
        slider_trem5->setInvertedAppearance(true);
        slider_trem5->setTickPosition(QSlider::TicksBothSides);
        slider_trem5->setTickInterval(40);
        slider_trem4 = new QSlider(centralWidget);
        slider_trem4->setObjectName("slider_trem4");
        slider_trem4->setGeometry(QRect(30, 300, 160, 16));
        slider_trem4->setCursor(QCursor(Qt::PointingHandCursor));
        slider_trem4->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
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
        slider_trem4->setMinimum(1);
        slider_trem4->setMaximum(200);
        slider_trem4->setValue(100);
        slider_trem4->setOrientation(Qt::Horizontal);
        slider_trem4->setInvertedAppearance(true);
        slider_trem4->setTickPosition(QSlider::TicksBothSides);
        slider_trem4->setTickInterval(40);
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        trem_1->raise();
        trem_5->raise();
        trem_3->raise();
        trem_4->raise();
        trem_2->raise();
        slider_trem1->raise();
        slider_trem2->raise();
        slider_trem3->raise();
        slider_trem5->raise();
        slider_trem4->raise();
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
        trem_5->setText(QString());
        trem_3->setText(QString());
        trem_4->setText(QString());
        trem_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
