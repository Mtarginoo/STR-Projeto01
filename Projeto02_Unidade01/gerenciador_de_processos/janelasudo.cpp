#include "janelasudo.h"
#include "ui_janelasudo.h"

JanelaSudo::JanelaSudo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaSudo)
{
    ui->setupUi(this);
}

JanelaSudo::~JanelaSudo()
{
    delete ui;
}



void JanelaSudo::on_btn_ok_sudo_accepted()
{
    this->SenhaSudo = ui->le_sudo_senha->text();
}
