#include "mainwindow_child.h"
#include "ui_mainwindow_child.h"
#include "mainwindow.h"

MainWindow_child::MainWindow_child(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_child)
{
    ui->setupUi(this);
    setFixedSize(403,325);
    //向医生发送信息
    udpsock = new QUdpSocket();
    udpsock->bind(QHostAddress("192.168.241.1"),1234);  //本端口绑定IP，端口号
    connect(ui->btn_sndquest, SIGNAL(clicked(bool)), this, SLOT(on_btn_sndquest_clicked()));
   connect(udpsock,SIGNAL(readyRead()), this, SLOT(slot_readyRead()));
    //向云端数据库发送请求信息
   udpsock1 = new QUdpSocket();
//   udpsock1->bind(QHostAddress("192.168.241.1"),1234);  //本端口绑定IP，端口号

   connect(ui->btn_shuju, SIGNAL(clicked(bool)), this, SLOT(on_btn_shuju_clicked()));
  connect(udpsock1,SIGNAL(Result()), this, SLOT(slot_result()));



}

MainWindow_child::~MainWindow_child()
{
    delete ui;
}

void MainWindow_child::receiveData2(QString data)
{
    ui->line_countin2->setText(data);     //获取传递过来的数据
}



void MainWindow_child::slot_readyRead()
{
    //接受医生回复
    QByteArray ba;
    ba.resize(udpsock->pendingDatagramSize());
    udpsock->readDatagram(ba.data(), ba.size());

    QString str = QString::fromUtf8(ba);
    ui->tbrow_rec->append(str);

}



void MainWindow_child::on_btn_sndquest_clicked()
{
    if(ui->tedit_sndquest->document()->isEmpty()) //发送的数据是否为空
     {
        //弹出提示框，输入发送内容
        QMessageBox::information(this, "信息发送", "请填写发送内容哦~~", QMessageBox::Yes|QMessageBox::No);

        return;
    }
    //获取发送文本
     QString snd_str = ui->tedit_sndquest->toPlainText() ;
     QByteArray snd_bytes = snd_str.toUtf8();//吧字符串转换位字节
    //向192.163.241.1设备上绑定了2345的进程发送数据、（向医生的设备端发送数据）
     qint64 ret = udpsock->writeDatagram(snd_bytes, QHostAddress("192.168.241.1"), 2345);

     if(ret == -1)
      {
         QMessageBox::information(this, "error", "发送失败了，稍后再试哦-.-");
         return ;
     }

     QMessageBox::information(this, "write info", "发送成功，等待医生回复哦~~");
}




void MainWindow_child::on_btn_shuju_clicked()
{
    QString child_str = ui->line_countin2->text();

    if(child_str.isEmpty())
    {

        QMessageBox::information(this, "信息填写", "请填写用户名.");
        return ;
    }


    //封装数据：结构体
    //user_str.toStdString().c_str()
    //功能：将QString转换位C语言字符串
    struct child_struct child;
    qsnprintf(child.child_user, 20, child_str.toStdString().c_str());

    qDebug()<<child_str<<":";


    //向数据库发送信息
    QHostAddress *addr2 = new QHostAddress(REG_SERVER_IP2);
    qint64 ret = udpsock1->writeDatagram((char *)&child, sizeof(child), *addr2, REG_SERVER_PORT2);


    if(ret == -1)
     {
        QMessageBox::information(this, "error", "upd error.");
        return ;
     }

      QMessageBox::information(this, "write info", "upd succed,wait a minute");//发送成功，等待数据库回应

}
void MainWindow_child::slot_result()
{
    struct result_struct2 result;
  //接收结构体
    while (udpsock1->hasPendingDatagrams())
    {
        udpsock1->readDatagram((char *)&result,sizeof(struct result_struct2));

         QString str_temp=result.result_tempr;
         QString str_pulse=result.result_puls;


         qDebug()<<str_temp<<":"<<str_pulse;
         ui->line_temp->setText(str_temp);
          ui->line_puls->setText(str_pulse);

       }
    //接收到之后显示到单行文本框中

//    ui->line_temp->setText(str_temp);
//     ui->line_puls->setText(str_pulse);
}
