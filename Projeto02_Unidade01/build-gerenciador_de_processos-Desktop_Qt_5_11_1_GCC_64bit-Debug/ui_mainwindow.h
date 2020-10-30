/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *txt_PID;
    QPushButton *btn_matar;
    QPushButton *btn_suspender;
    QPushButton *btn_continuar;
    QPushButton *btn_renice;
    QLabel *label_2;
    QLineEdit *txt_PID_2;
    QColumnView *columnView;
    QPushButton *btn_alterar_cpu;
    QRadioButton *radioButton;
    QSplitter *splitter;
    QLabel *label_3;
    QSpinBox *spinBox;
    QSplitter *splitter_2;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(916, 522);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 41, 21));
        txt_PID = new QLineEdit(centralWidget);
        txt_PID->setObjectName(QStringLiteral("txt_PID"));
        txt_PID->setGeometry(QRect(50, 10, 461, 25));
        btn_matar = new QPushButton(centralWidget);
        btn_matar->setObjectName(QStringLiteral("btn_matar"));
        btn_matar->setGeometry(QRect(520, 10, 80, 25));
        btn_suspender = new QPushButton(centralWidget);
        btn_suspender->setObjectName(QStringLiteral("btn_suspender"));
        btn_suspender->setGeometry(QRect(610, 10, 89, 25));
        btn_continuar = new QPushButton(centralWidget);
        btn_continuar->setObjectName(QStringLiteral("btn_continuar"));
        btn_continuar->setGeometry(QRect(710, 10, 89, 25));
        btn_renice = new QPushButton(centralWidget);
        btn_renice->setObjectName(QStringLiteral("btn_renice"));
        btn_renice->setGeometry(QRect(820, 40, 89, 25));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 41, 21));
        txt_PID_2 = new QLineEdit(centralWidget);
        txt_PID_2->setObjectName(QStringLiteral("txt_PID_2"));
        txt_PID_2->setGeometry(QRect(60, 40, 471, 25));
        columnView = new QColumnView(centralWidget);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(20, 90, 881, 361));
        btn_alterar_cpu = new QPushButton(centralWidget);
        btn_alterar_cpu->setObjectName(QStringLiteral("btn_alterar_cpu"));
        btn_alterar_cpu->setGeometry(QRect(620, 40, 89, 25));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(810, 10, 112, 23));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(540, 40, 73, 26));
        splitter->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter->addWidget(label_3);
        spinBox = new QSpinBox(splitter);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(8);
        splitter->addWidget(spinBox);
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(720, 40, 90, 26));
        splitter_2->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_2->addWidget(label_4);
        spinBox_2 = new QSpinBox(splitter_2);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(8);
        splitter_2->addWidget(spinBox_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 916, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "PID: ", nullptr));
        btn_matar->setText(QApplication::translate("MainWindow", "Matar", nullptr));
        btn_suspender->setText(QApplication::translate("MainWindow", "Suspender", nullptr));
        btn_continuar->setText(QApplication::translate("MainWindow", "Continuar", nullptr));
        btn_renice->setText(QApplication::translate("MainWindow", "Renice", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Filtro:  ", nullptr));
        btn_alterar_cpu->setText(QApplication::translate("MainWindow", "Alterar", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Root", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "CPU:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Renice:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
