#ifndef MAINWINDOW_PA_H
#define MAINWINDOW_PA_H

#include <QMainWindow>
#include "mainwindow.h"
#include <QUdpSocket>


namespace Ui {
class MainWindow_pa;
}

#define REG_SERVER_IP3 "192.168.47.128"
#define REG_SERVER_PORT3 5678

struct patient_struct
 {
    char patien_user[20];
};

struct result_struct6
{
    char result_tempr[20];
    char result_puls[20];

};

class MainWindow_pa : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_pa(QWidget *parent = 0);
    ~MainWindow_pa();
    QUdpSocket *udpsock;


private:
    Ui::MainWindow_pa *ui;


public slots:
    void receiveData(QString data);


private slots:
    void on_btn_call_clicked();
    void on_pushButton_clicked();
    void on_btn_shuju_clicked();

    void slot_result6();

};

#endif // MAINWINDOW_PA_H
