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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QRadioButton *rb_root;
    QSplitter *splitter;
    QSplitter *splitter_3;
    QLabel *label_3;
    QComboBox *comboBox_cpu;
    QPushButton *btn_alterar_cpu;
    QSplitter *splitter_2;
    QLabel *label_4;
    QSpinBox *spinBox_renice;
    QPushButton *btn_renice;
    QTableWidget *tabela_processos;
    QSplitter *splitter_5;
    QLineEdit *txt_PID;
    QPushButton *btn_matar;
    QSplitter *splitter_6;
    QPushButton *btn_suspender;
    QPushButton *btn_continuar;
    QSplitter *splitter_7;
    QLabel *label_2;
    QSplitter *splitter_4;
    QLineEdit *txt_filtro;
    QPushButton *btn_filtrar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(940, 744);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 41, 21));
        rb_root = new QRadioButton(centralWidget);
        rb_root->setObjectName(QStringLiteral("rb_root"));
        rb_root->setGeometry(QRect(860, 0, 61, 23));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(10, 50, 199, 25));
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
        splitter_2->setGeometry(QRect(260, 50, 183, 26));
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
        tabela_processos = new QTableWidget(centralWidget);
        if (tabela_processos->columnCount() < 9)
            tabela_processos->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabela_processos->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tabela_processos->setObjectName(QStringLiteral("tabela_processos"));
        tabela_processos->setGeometry(QRect(20, 90, 901, 591));
        splitter_5 = new QSplitter(centralWidget);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(50, 10, 222, 25));
        splitter_5->setOrientation(Qt::Horizontal);
        txt_PID = new QLineEdit(splitter_5);
        txt_PID->setObjectName(QStringLiteral("txt_PID"));
        splitter_5->addWidget(txt_PID);
        btn_matar = new QPushButton(splitter_5);
        btn_matar->setObjectName(QStringLiteral("btn_matar"));
        splitter_5->addWidget(btn_matar);
        splitter_6 = new QSplitter(centralWidget);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(280, 10, 161, 25));
        splitter_6->setOrientation(Qt::Horizontal);
        btn_suspender = new QPushButton(splitter_6);
        btn_suspender->setObjectName(QStringLiteral("btn_suspender"));
        splitter_6->addWidget(btn_suspender);
        btn_continuar = new QPushButton(splitter_6);
        btn_continuar->setObjectName(QStringLiteral("btn_continuar"));
        splitter_6->addWidget(btn_continuar);
        splitter_7 = new QSplitter(centralWidget);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setGeometry(QRect(650, 30, 270, 25));
        splitter_7->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_7);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_7->addWidget(label_2);
        splitter_4 = new QSplitter(splitter_7);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        txt_filtro = new QLineEdit(splitter_4);
        txt_filtro->setObjectName(QStringLiteral("txt_filtro"));
        splitter_4->addWidget(txt_filtro);
        btn_filtrar = new QPushButton(splitter_4);
        btn_filtrar->setObjectName(QStringLiteral("btn_filtrar"));
        splitter_4->addWidget(btn_filtrar);
        splitter_7->addWidget(splitter_4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 940, 22));
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
        rb_root->setText(QApplication::translate("MainWindow", "Root", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "CPU:", nullptr));
        comboBox_cpu->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBox_cpu->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        comboBox_cpu->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        comboBox_cpu->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));

        btn_alterar_cpu->setText(QApplication::translate("MainWindow", "Alterar", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Renice:", nullptr));
        btn_renice->setText(QApplication::translate("MainWindow", "Renice", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela_processos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "User", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela_processos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "PID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela_processos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela_processos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Prioridade", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabela_processos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Nice", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabela_processos->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "CPU alocada", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabela_processos->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Uso da CPU (%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabela_processos->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Mem\303\263ria (%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabela_processos->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Comando", nullptr));
        btn_matar->setText(QApplication::translate("MainWindow", "Matar", nullptr));
        btn_suspender->setText(QApplication::translate("MainWindow", "Suspender", nullptr));
        btn_continuar->setText(QApplication::translate("MainWindow", "Continuar", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Filtro:  ", nullptr));
        btn_filtrar->setText(QApplication::translate("MainWindow", "Filtar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
