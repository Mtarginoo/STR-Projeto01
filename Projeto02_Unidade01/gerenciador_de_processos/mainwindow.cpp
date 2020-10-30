#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sched.h>

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

    int cpu_id = ui->box_num_cpu->

    CPU_SET(3, &mask);

    int PID = ui->txt_PID->text().toInt();

    int result = sched_setaffinity(PID, sizeof(mask), &mask);

}
