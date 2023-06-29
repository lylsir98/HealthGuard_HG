#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QHostAddress>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

#include "mainwindow_pa.h"
#include "mainwindow_child.h"



#define REG_SERVER_IP "192.168.47.128"
#define REG_SERVER_PORT 5658

namespace Ui {
class MainWindow;
}

struct result_struct
{
    int result;

};

struct lg_ch_struct
{
    char lg_ch_user[20];
    char lg_ch_passwrd[20];

};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString user1;
    QUdpSocket *udpsock;


private slots:
    void on_pushButton_clicked();

    void on_btn_region_clicked();

    void on_pushButton_3_clicked();
    void slot_readyRead();


    void on_btn_doctor_clicked();

private:
    Ui::MainWindow *ui;


signals:
    void sendData(QString);
    void sendData2(QString);


};

#endif // MAINWINDOW_H
