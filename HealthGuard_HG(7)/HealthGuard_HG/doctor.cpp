#include "doctor.h"
#include "ui_doctor.h"
#include "app_website.h"

doctor::doctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::doctor)
{
    ui->setupUi(this);
    setWindowTitle("医生登录界面");
    setFixedSize(400,300);
    ui->ledit_doctnam->setPlaceholderText("医生用户名");
    ui->ledit_passwd->setPlaceholderText("密码");
     ui->ledit_passwd->setEchoMode(QLineEdit::Password);

     udpsock = new QUdpSocket();
     connect(udpsock,SIGNAL(readyRead()), this, SLOT(slot_readyRead1()));
}

doctor::~doctor()
{
    delete ui;
}

void doctor::on_btn_doctlogin_clicked()
{
    QString doct_str = ui->ledit_doctnam->text();
    QString passwrd_str = ui->ledit_passwd->text() ;


    if(doct_str.isEmpty()||passwrd_str.isEmpty())
    {

        QMessageBox::information(this, "信息填写", "信息请填写完整.");
        return ;
    }


    //封装数据：结构体
    //user_str.toStdString().c_str()
    //功能：将QString转换位C语言字符串
    struct doctor_struct doct;
    qsnprintf(doct.doct_user, 20, doct_str.toStdString().c_str());
    qsnprintf(doct.doct_passwrd, 20, passwrd_str.toStdString().c_str());

    qDebug()<<doct_str<<":"<<passwrd_str<<":";


    //向数据库发送信息
    QHostAddress *addr = new QHostAddress(REG_SERVER_IP);
    qint64 ret = udpsock->writeDatagram((char *)&doct, sizeof(doct), *addr, REG_SERVER_PORT);


    if(ret == -1)
     {
        QMessageBox::information(this, "error", "upd error.");
        return ;
     }

      QMessageBox::information(this, "write info", "upd succed,wait a minute");//发送成功，等待数据库回应

//这块是为了测试，可以无条件登录上
      QMessageBox::information(this, "登录结果", "登录成功");
      QString doct1 = ui->ledit_doctnam->text();
      app_website *doctweb = new app_website(doct1);//创建进入医生版app首页;
      //非常非常重要，当窗口关闭时释放内存
      doctweb->setAttribute(Qt::WA_DeleteOnClose);
      doctweb->show();//登录窗口显示

 //到这里，等连上云端，把这块删了

}

void doctor::slot_readyRead1()
{
    struct result_struct5 result;
    udpsock->readDatagram((char *)&result, sizeof(struct result_struct5));
    if(result.result == 1)
    {
        QMessageBox::information(this, "登录结果", "登录成功");

        QString doct1 = ui->ledit_doctnam->text();
        app_website *doctweb = new app_website(doct1);//创建进入医生版app首页;
        //非常非常重要，当窗口关闭时释放内存
        doctweb->setAttribute(Qt::WA_DeleteOnClose);
        doctweb->show();//登录窗口显示
    }
    else
        {
          QMessageBox::information(this, "登录结果", "登录失败");
         }

}

