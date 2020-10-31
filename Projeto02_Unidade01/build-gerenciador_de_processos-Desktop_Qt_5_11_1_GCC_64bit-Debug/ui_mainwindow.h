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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
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
    QLabel *label_2;
    QLineEdit *txt_PID_2;
    QRadioButton *rb_root;
    QLabel *label_5;
    QTableView *tableView;
    QLabel *saida;
    QSplitter *splitter;
    QSplitter *splitter_3;
    QLabel *label_3;
    QComboBox *comboBox_cpu;
    QPushButton *btn_alterar_cpu;
    QSplitter *splitter_2;
    QLabel *label_4;
    QSpinBox *spinBox_renice;
    QPushButton *btn_renice;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(922, 552);
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
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 41, 21));
        txt_PID_2 = new QLineEdit(centralWidget);
        txt_PID_2->setObjectName(QStringLiteral("txt_PID_2"));
        txt_PID_2->setGeometry(QRect(60, 40, 451, 25));
        rb_root = new QRadioButton(centralWidget);
        rb_root->setObjectName(QStringLiteral("rb_root"));
        rb_root->setGeometry(QRect(810, 10, 112, 23));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 80, 111, 17));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(15, 371, 891, 111));
        saida = new QLabel(centralWidget);
        saida->setObjectName(QStringLiteral("saida"));
        saida->setGeometry(QRect(370, 130, 67, 17));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(520, 40, 199, 25));
        splitter->setOrientation(Qt::Horizontal);
        splitter_3 = new QSplitter(splitter);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_3->addWidget(label_3);
        comboBox_cpu = new QComboBox(splitter_3);
        comboBox_cpu->addItem(QString());
        comboBox_cpu->addItem(QString());
        comboBox_cpu->addItem(QString());
        comboBox_cpu->addItem(QString());
        comboBox_cpu->setObjectName(QStringLiteral("comboBox_cpu"));
        splitter_3->addWidget(comboBox_cpu);
        btn_alterar_cpu = new QPushButton(splitter_3);
        btn_alterar_cpu->setObjectName(QStringLiteral("btn_alterar_cpu"));
        splitter_3->addWidget(btn_alterar_cpu);
        splitter->addWidget(splitter_3);
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(730, 40, 183, 26));
        splitter_2->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_2->addWidget(label_4);
        spinBox_renice = new QSpinBox(splitter_2);
        spinBox_renice->setObjectName(QStringLiteral("spinBox_renice"));
        spinBox_renice->setMinimum(-20);
        spinBox_renice->setMaximum(19);
        splitter_2->addWidget(spinBox_renice);
        btn_renice = new QPushButton(splitter_2);
        btn_renice->setObjectName(QStringLiteral("btn_renice"));
        splitter_2->addWidget(btn_renice);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 922, 22));
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
        label_2->setText(QApplication::translate("MainWindow", "Filtro:  ", nullptr));
        rb_root->setText(QApplication::translate("MainWindow", "Root", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        saida->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "CPU:", nullptr));
        comboBox_cpu->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBox_cpu->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        comboBox_cpu->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        comboBox_cpu->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));

        btn_alterar_cpu->setText(QApplication::translate("MainWindow", "Alterar", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Renice:", nullptr));
        btn_renice->setText(QApplication::translate("MainWindow", "Renice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
