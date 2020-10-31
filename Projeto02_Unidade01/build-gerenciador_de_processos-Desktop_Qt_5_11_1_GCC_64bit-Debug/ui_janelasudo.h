/********************************************************************************
** Form generated from reading UI file 'janelasudo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELASUDO_H
#define UI_JANELASUDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_JanelaSudo
{
public:
    QDialogButtonBox *btn_ok_sudo;
    QLineEdit *le_sudo_senha;
    QLabel *label;

    void setupUi(QDialog *JanelaSudo)
    {
        if (JanelaSudo->objectName().isEmpty())
            JanelaSudo->setObjectName(QStringLiteral("JanelaSudo"));
        JanelaSudo->resize(320, 240);
        btn_ok_sudo = new QDialogButtonBox(JanelaSudo);
        btn_ok_sudo->setObjectName(QStringLiteral("btn_ok_sudo"));
        btn_ok_sudo->setGeometry(QRect(10, 200, 301, 32));
        btn_ok_sudo->setOrientation(Qt::Horizontal);
        btn_ok_sudo->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        le_sudo_senha = new QLineEdit(JanelaSudo);
        le_sudo_senha->setObjectName(QStringLiteral("le_sudo_senha"));
        le_sudo_senha->setGeometry(QRect(60, 70, 241, 21));
        label = new QLabel(JanelaSudo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 49, 17));

        retranslateUi(JanelaSudo);
        QObject::connect(btn_ok_sudo, SIGNAL(accepted()), JanelaSudo, SLOT(accept()));
        QObject::connect(btn_ok_sudo, SIGNAL(rejected()), JanelaSudo, SLOT(reject()));

        QMetaObject::connectSlotsByName(JanelaSudo);
    } // setupUi

    void retranslateUi(QDialog *JanelaSudo)
    {
        JanelaSudo->setWindowTitle(QApplication::translate("JanelaSudo", "Dialog", nullptr));
        label->setText(QApplication::translate("JanelaSudo", "Senha: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaSudo: public Ui_JanelaSudo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELASUDO_H
