#include "mainwindow_pa.h"
#include "ui_mainwindow_pa.h"
#include <QtCore/qmath.h>



MainWindow_pa::MainWindow_pa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_pa)
{
    ui->setupUi(this);
    setFixedSize(403,325);
//    ui->line_temper->setText("36.9℃");
    udpsock = new QUdpSocket();
    udpsock->bind(QHostAddress("192.168.241.1"),1234);  //本端口绑定IP，端口号
    connect(ui->btn_shuju, SIGNAL(clicked(bool)), this, SLOT(on_btn_shuju_clicked()));
   connect(udpsock,SIGNAL(Result()), this, SLOT(slot_result1()));

}



MainWindow_pa::~MainWindow_pa()
{
    delete ui;
}

void MainWindow_pa::receiveData(QString data)
{
    ui->line_countin->setText(data);     //获取传递过来的数据
}



void MainWindow_pa::on_btn_call_clicked()
{



}





void MainWindow_pa::on_pushButton_clicked()
{
    QString Qtemper = ui->line_temper->text();
     QByteArray Bytes_temper = Qtemper.toUtf8();
    qint64 ret = udpsock->writeDatagram(Bytes_temper,QHostAddress("192.168.1.48"),5534);
    if(ret==-1)
    {
        QMessageBox::information(this,"提示","呼叫失败，请稍后尝试");
        return;
    }
    QMessageBox::information(this,"提示","呼叫成功！您的子女正在赶来的路上");
}



void MainWindow_pa::on_btn_shuju_clicked()
{

      QString patient_str = ui->line_countin->text();

        if(patient_str.isEmpty())
        {

            QMessageBox::information(this, "信息填写", "请填写用户名.");
            return ;
        }


        //封装数据：结构体
        //user_str.toStdString().c_str()
        //功能：将QString转换位C语言字符串
        struct patient_struct patient;
        qsnprintf(patient.patien_user, 20, patient_str.toStdString().c_str());

        qDebug()<<patient_str<<":";


        //向数据库发送信息
        QHostAddress *addr3 = new QHostAddress(REG_SERVER_IP3);
        qint64 ret = udpsock->writeDatagram((char *)&patient, sizeof(patient), *addr3, REG_SERVER_PORT3);


        if(ret == -1)
         {
            QMessageBox::information(this, "error", "upd error.");
            return ;
         }

          QMessageBox::information(this, "write info", "upd succed,wait a minute");//发送成功，等待数据库回应

}

void MainWindow_pa::slot_result6()
{
    struct result_struct6 result;
  //接收结构体
    while (udpsock->hasPendingDatagrams())
    {
        udpsock->readDatagram((char *)&result,sizeof(struct result_struct2));

         QString str_temp=result.result_tempr;
         QString str_pulse=result.result_puls;


         qDebug()<<str_temp<<":"<<str_pulse;
         ui->line_temper->setText(str_temp);
          ui->line_puls->setText(str_pulse);

       }
    //接收到之后显示到单行文本框中

//    ui->line_temp->setText(str_temp);
//     ui->line_puls->setText(str_pulse);
}
