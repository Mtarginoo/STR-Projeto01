#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_matar_clicked();

    void on_btn_suspender_clicked();

    void on_btn_continuar_clicked();

    void on_btn_alterar_cpu_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
