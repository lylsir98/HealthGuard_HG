#ifndef MAINWINDOW_REGION_H
#define MAINWINDOW_REGION_H

#include <QMainWindow>
#include <QSqlDatabase>  //sql操作头文件
#include <QtSqlVersion>   //sql语句的操作的相关头文件
#include <QSqlError>   //sql语句的错误头文件
#include <QDebug>
#include <QSqlQuery>
#include <QUdpSocket>
#include <QMessageBox>

#define MALE 1
#define FAMALE 0
#define REg_SERVER_IP "192.168.47.128"
#define REG_SERVER_PORt 5658

struct reg_struct
{
    char reg_user[20];
    char reg_passwrd[20];
    char reg_doctname[20];
    char reg_record[100];
    int reg_tempr;
     int reg_pulse;
     int reg_age;
     int reg_sex;

};


namespace Ui {
class MainWindow_region;
}

class MainWindow_region : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_region(QWidget *parent = 0);
    ~MainWindow_region();
    QUdpSocket *udpsock;

private slots:
    void on_pushButton_clicked();
  void slot_readyRead();

private:
    Ui::MainWindow_region *ui;
};

#endif // MAINWINDOW_REGION_H
