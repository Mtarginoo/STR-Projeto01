#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sched.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include "QMessageBox"
#include <iostream>
#include <fstream>
#include <QTimer>
#include <QDebug>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(mostra_tabela()));
    timer->start(500);

    ui->setupUi(this);
    setWindowTitle("Gerenciador de Processos");

    mostra_tabela();

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

    //QMessageBox::information(this, "Senha passada", sudo_senha);

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
    //quando o nice não é negativo (não é necessário sudo)
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


void MainWindow::mostra_tabela(){
    ui->tabela_processos->setRowCount(0);
    struct processo{
        int PID;
        string user;
        string comando;
        float uso_CPU;
        int num_CPU;
        int prioridade;
        string status;
        float uso_memoria;
        int nice;
    };

    unsigned int i, j;
    ifstream  meusProcessos;//ler arquivo de texto
    string processos; //texto lido do arquivo de texto
    string buffer; // buffer para separar cada linha do texto em um elemento
    vector<processo> programas; //vector que vai receber os objetos processos
    processo my_rank; // Processo atual


    processos = system("ps -eo user,pid,stat,pri,ni,psr,%cpu,%mem,command --sort=-%cpu > proc4.txt");//comando que irá escrever o comando no .txt
    meusProcessos.open("proc4.txt");
    getline(meusProcessos, processos);//Pular o cabeçalho do ps


     while(meusProcessos){
            i = 0, j = 0;
            getline(meusProcessos, processos);//Ler a linha do .txt
            stringstream ss(processos);
            //Laço que irá separar a linha do .txt para ser analisada em uma lista
            while(ss >> buffer){
                if(i == 0){
                    my_rank.user = buffer;
                    i++;
                    continue;
                }
                else if(i == 1){
                    my_rank.PID = stoi(buffer);
                    i++;
                    continue;
                }
                else if(i == 2){
                    my_rank.status = buffer;
                    i++;
                    continue;
                }
                else if(i == 3){
                    my_rank.prioridade = stoi(buffer);
                    i++;
                    continue;
                }
                else if(i == 4){
                    if(buffer == "-"){
                        my_rank.nice = 0;
                        i++;
                        continue;
                    }
                    else{
                        my_rank.nice = stoi(buffer);
                        i++;
                        continue;
                    }
                }
                else if(i == 5){
                    my_rank.num_CPU = stoi(buffer);
                    i++;
                    continue;
                }
                else if(i == 6){
                    my_rank.uso_CPU = stof(buffer);
                    qDebug() << QString::number(my_rank.uso_CPU, 'f', 1);
                    i++;
                    continue;
                }
                else if(i == 7){
                    my_rank.uso_memoria = stof(buffer);
                    i++;
                    continue;
                }
                else if(i == 8){
                    my_rank.comando = buffer;
                    i++;
                    continue;
                }
                else{
                    i++;
                    continue;
                }

            }
            //Adiciona ao vetor de processos do sistema
            programas.push_back(my_rank);
        }
     j = 0;
     while(j < programas.size()){
         ui->tabela_processos->insertRow(j);
         ui->tabela_processos->setItem(j, 0, new QTableWidgetItem(QString::fromStdString(programas.at(j).user)));
         ui->tabela_processos->setItem(j, 1, new QTableWidgetItem(QString::number(programas.at(j).PID)));
         ui->tabela_processos->setItem(j, 2, new QTableWidgetItem(QString::fromStdString(programas.at(j).status)));
         ui->tabela_processos->setItem(j, 3, new QTableWidgetItem(QString::number(programas.at(j).prioridade+1)));
         ui->tabela_processos->setItem(j, 4, new QTableWidgetItem(QString::number(programas.at(j).nice)));
         ui->tabela_processos->setItem(j, 5, new QTableWidgetItem(QString::number(programas.at(j).num_CPU+1)));
         ui->tabela_processos->setItem(j, 6, new QTableWidgetItem(QString::number(programas.at(j).uso_CPU)));
         //qDebug() << QString::number(programas.at(j).uso_CPU, 'f', 1);
         ui->tabela_processos->setItem(j, 7, new QTableWidgetItem(QString::number(programas.at(j).uso_memoria)));
         ui->tabela_processos->setItem(j, 8, new QTableWidgetItem(QString::fromStdString(programas.at(j).comando)));
         j++;
     }

        meusProcessos.close();
}

void MainWindow::on_btn_filtrar_clicked()
{

}
