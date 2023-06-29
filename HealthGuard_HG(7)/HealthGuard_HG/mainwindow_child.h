#ifndef MAINWINDOW_CHILD_H
#define MAINWINDOW_CHILD_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QMessageBox>


namespace Ui {
class MainWindow_child;
}


#define REG_SERVER_IP2 "192.168.47.128"
#define REG_SERVER_PORT2 5678



struct child_struct
 {
    char child_user[20];
};

struct result_struct2
{
    char result_tempr[20];
    char result_puls[20];

};

class MainWindow_child : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_child(QWidget *parent = 0);
    ~MainWindow_child();

    QUdpSocket *udpsock;
    QUdpSocket *udpsock1;

private:
    Ui::MainWindow_child *ui;

public slots:
    void receiveData2(QString data);

private slots:
    void on_btn_sndquest_clicked();
    void slot_readyRead();


    void on_btn_shuju_clicked();
    void slot_result();
};

#endif // MAINWINDOW_CHILD_H
