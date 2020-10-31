#ifndef JANELASUDO_H
#define JANELASUDO_H

#include <QDialog>

namespace Ui {
class JanelaSudo;
}

class JanelaSudo : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaSudo(QWidget *parent = 0);
    QString SenhaSudo;
    ~JanelaSudo();

private slots:
    void on_btn_ok_sudo_accepted();

private:
    Ui::JanelaSudo *ui;
};

#endif // JANELASUDO_H
