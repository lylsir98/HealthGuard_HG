#ifndef APP_WEBSEITE_H
#define APP_WEBSEITE_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QMessageBox>


namespace Ui {
class app_webseite;
}

class app_webseite : public QMainWindow
{
    Q_OBJECT

public:
    explicit app_webseite(QString user1,QWidget *parent = 0);
    ~app_webseite();
    QString user2;
    QUdpSocket *udpsock;



private slots:
    void on_btn_sndquest_clicked();

    void on_btn_heart_clicked();

    void on_btn_temp_clicked();

    void on_btn_sql_clicked();

    void on_btn_exit_clicked();
    void slot_readyread(void);


private:
    Ui::app_webseite *ui;
    QString user2;
     QUdpSocket *udpsock;


};

#endif // APP_WEBSEITE_H
