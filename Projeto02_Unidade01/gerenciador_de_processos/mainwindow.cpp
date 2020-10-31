#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sched.h>
#include <stdio.h>
#include "QMessageBox"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_matar_clicked()
{
    int PID_To_Kill = ui->txt_PID->text().toInt();

    kill(PID_To_Kill, SIGKILL);
}

void MainWindow::on_btn_suspender_clicked()
{
    int PID = ui->txt_PID->text().toInt();

    kill(PID, SIGSTOP);
}


void MainWindow::on_btn_continuar_clicked()
{
    int PID = ui->txt_PID->text().toInt();

    kill(PID, SIGCONT);
}

void MainWindow::on_btn_alterar_cpu_clicked()
{
    cpu_set_t  mask;
    CPU_ZERO(&mask);

    int cpu_id = ui->comboBox_cpu->currentIndex();

    CPU_SET(cpu_id, &mask);

    int PID = ui->txt_PID->text().toInt();

    sched_setaffinity(PID, sizeof(mask), &mask);
}

void MainWindow::on_btn_renice_clicked()
{
    QString comando, comando_sudo, sudo_senha;
    QByteArray ba;
    const char *c_str = ba.data();
    int PID, nice_value;
    //JanelaSudo telaSudo;

    PID = ui->txt_PID->text().toInt();
    nice_value = ui->spinBox_renice->value();

    sudo_senha = telaSudo->SenhaSudo;

    QMessageBox::information(this, "Senha passada", sudo_senha);

    //quando o nice é negativo e o root está ativado
    if(nice_value < 0 && ui->rb_root->isChecked()){
        comando = "sudo -S renice " + QString::number(nice_value) + " " + QString::number(PID);
        comando_sudo = "echo " + sudo_senha + " | " + comando;
        ba = comando_sudo.toLocal8Bit();
        c_str = ba.data();
        system(c_str);
    }
    //quando o nice é negativo mas o root ainda não foi ativado
    else if(nice_value < 0 && !ui->rb_root->isChecked()){
        QMessageBox::warning(this,"Valor nice negativo", "Para valores de nice negativos, marque a opção 'Root'");
    }
    //qunado o nice não é negativo (não é necessário sudo)
    else{
        comando = "renice " + QString::number(nice_value) + " " +QString::number(PID);
        ba = comando.toLocal8Bit();
        c_str = ba.data();
        system(c_str);
    }

}

void MainWindow::on_rb_root_clicked()
{
    telaSudo->show();
}
