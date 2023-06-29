#include "app_webseite.h"
#include "ui_app_webseite.h"

app_webseite::app_webseite(QString user1,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::app_webseite)
{
    ui->setupUi(this);
    user1=user2;

    setWindowTitle(user2);

    udpsock = new QUdpSocket();


    udpsock->bind(QHostAddress("192.168.241.1"),1234);
   //将发送按钮
    connect(ui->btn_sndquest, SIGNAL(clicked(bool)), this, SLOT(on_btn_sndquest_clicked()));
    //qApp
     connect(ui->btn_exit, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
    connect(udpsock, SIGNAL(readyRead()), this, SLOT(slot_readyread()));
}

app_webseite::~app_webseite()
{
    delete ui;
}

void app_webseite::on_btn_sndquest_clicked()
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
    //向192.163.241.1设备上绑定了5678的进程发送数据
     qint64 ret = udpsock->writeDatagram(snd_bytes, QHostAddress("192.168.241.1"), 5678);

     if(ret == -1)
      {
         QMessageBox::information(this, "error", "发送失败了，稍后再试哦-.-");
         return ;
     }

     QMessageBox::information(this, "write info", "发送成功，等待医生回复哦~~");
}

void app_webseite::slot_readyread()
{
    //接受医生回复
    QByteArray ba;
    ba.resize(udpsock->pendingDatagramSize());
    udpsock->readDatagram(ba.data(), ba.size());

    QString str = QString::fromUtf8(ba);
    ui->tbrow_rec->append(str);

}

void app_webseite::on_btn_heart_clicked()
{
    //获取数据库传过来的心电图数据，对x,y赋值
    //设置画笔，画纸
    //画图










}

void app_webseite::on_btn_temp_clicked()
{
    //获取数据库传过来的体温数据，对u,v赋值
    //设置画笔，画纸
    //画图





}

void app_webseite::on_btn_sql_clicked()
{
    //将数据传送到本地设备数据库



}

void app_webseite::on_btn_exit_clicked()
{
    this->close();
}
