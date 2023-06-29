#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow_region.h"
#include "mainwindow_help.h"
#include "mainwindow_child.h"
#include "mainwindow_pa.h"
#include "doctor.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     ui->setupUi(this);
     setFixedSize(420,305);

     ui->line_count->setPlaceholderText("用户名");
     ui->line_pass->setPlaceholderText("密码");
      ui->line_pass->setEchoMode(QLineEdit::Password);

    udpsock = new QUdpSocket();
     connect(udpsock, SIGNAL(readyRead()), this, SLOT(slot_readyRead()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString user_str = ui->line_count->text();
    QString passwrd_str = ui->line_pass->text();

    if(user_str.isEmpty()||passwrd_str.isEmpty())
    {
        QMessageBox::information(this,"提示","登入账号或密码不完整");
        return;
    }


    //封装数据：结构体
    //user_str.toStdString().c_str()
    //功能：将QString转换位C语言字符串
    struct lg_ch_struct login;
    qsnprintf(login.lg_ch_user, 20, user_str.toStdString().c_str());
    qsnprintf(login.lg_ch_passwrd, 20, passwrd_str.toStdString().c_str());

    qDebug()<<user_str<<":"<<passwrd_str<<":";


    //向数据库发送信息
    QHostAddress *addr = new QHostAddress(REG_SERVER_IP);
    qint64 ret = udpsock->writeDatagram((char *)&login, sizeof(login), *addr, REG_SERVER_PORT);


    if(ret == -1)
     {
        QMessageBox::information(this, "error", "upd error.");
        return ;
     }

      QMessageBox::information(this, "write info", "upd succed,wait a minute");//发送成功，等待数据库回应

      //如果是登录，云端吧数据库中信息取出来进行比对，再把登录信息传给用户

      //下面这块是为了测试一下登录后，
      QMessageBox::StandardButton rb = QMessageBox::question(NULL, "选择", "您是家长?(子女)", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

      if(rb == QMessageBox::Yes)
      {

          QString String_count = ui->line_count->text();
          MainWindow_pa *pawin = new MainWindow_pa();
          pawin->show();
          connect(this, SIGNAL(sendData(QString)), pawin, SLOT(receiveData(QString)));
          sendData(String_count);
          //this->close();
      }
      else
      {
          QString String_count2 = ui->line_count->text();
          MainWindow_child *childwin = new MainWindow_child();
          childwin->show();
          connect(this, SIGNAL(sendData2(QString)), childwin, SLOT(receiveData2(QString)));
          sendData(String_count2);
          //this->close();
      }
      //到这里，连上云端之后就可以删了

}





void MainWindow::slot_readyRead()
  {
          struct result_struct result;
          udpsock->readDatagram((char *)&result, sizeof(struct result_struct));
          if(result.result == 1)
          {
//              QMessageBox::information(this, "登录结果", "登录成功");

              QMessageBox::StandardButton rb = QMessageBox::question(NULL, "选择", "您是家长?(子女)", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

              if(rb == QMessageBox::Yes)
              {

                  QString String_count = ui->line_count->text();
                  MainWindow_pa *pawin = new MainWindow_pa();
                  pawin->show();
                  connect(this, SIGNAL(sendData(QString)), pawin, SLOT(receiveData(QString)));
                  sendData(String_count);
                  //this->close();
              }
              else
              {
                  QString String_count2 = ui->line_count->text();
                  MainWindow_child *childwin = new MainWindow_child();
                  childwin->show();
                  connect(this, SIGNAL(sendData2(QString)), childwin, SLOT(receiveData2(QString)));
                  sendData2(String_count2);
                  //this->close();
              }
          }




          else
              {
                QMessageBox::information(this, "登录结果", "登录失败，密码或用户名错误");
               }

  }



void MainWindow::on_btn_region_clicked()
{
    MainWindow_region *regionwin = new MainWindow_region();
    regionwin->show();
}


void MainWindow::on_pushButton_3_clicked()
{

    MainWindow_help *helpwin = new MainWindow_help();
    helpwin->show();
}





void MainWindow::on_btn_doctor_clicked()
{
    doctor *doctwin = new doctor();
    doctwin->setAttribute(Qt::WA_DeleteOnClose);
     doctwin->show();
}
