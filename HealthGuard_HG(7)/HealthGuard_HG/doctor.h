#ifndef DOCTOR_H
#define DOCTOR_H

#include <QMainWindow>
#include <QSqlDatabase>  //sql操作头文件
#include <QtSqlVersion>   //sql语句的操作的相关头文件
#include <QSqlError>   //sql语句的错误头文件
#include <QDebug>
#include <QSqlQuery>
#include <QUdpSocket>
#include <QMessageBox>
#include "mainwindow.h"


namespace Ui {
class doctor;
}

#define REG_SERVER_IP "192.168.47.128"
#define REG_SERVER_PORT 5658

struct doctor_struct
{
    char doct_user[20];
    char doct_passwrd[20];

};

struct result_struct5
{
    int result;

};

class doctor : public QMainWindow
{
    Q_OBJECT

public:
    explicit doctor(QWidget *parent = 0);
    ~doctor();

private slots:
    void on_btn_doctlogin_clicked();
       void slot_readyRead1();



private:
    Ui::doctor *ui;
    QUdpSocket *udpsock;

};

#endif // DOCTOR_H
