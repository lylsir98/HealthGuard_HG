#include "mainwindow_region.h"
#include "ui_mainwindow_region.h"
#include "mainwindow.h"


MainWindow_region::MainWindow_region(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_region)
{
    ui->setupUi(this);
    setFixedSize(649,331);
    ui->line_name->setPlaceholderText("用户名");
    ui->line_pass->setPlaceholderText("密码");
    ui->line_age->setPlaceholderText("年龄");
    ui->line_doctname->setPlaceholderText("就诊医生");
    ui->line_tempr->setPlaceholderText("体温");
    ui->line_puls->setPlaceholderText("脉搏");
    ui->line_record->setPlaceholderText("就诊记录：次数");
    ui->line_pass->setEchoMode(QLineEdit::Password);

    ui->rbtn_man->setChecked(true);
    ui->rbtn_woman->setChecked(false);
    //发送数据
    udpsock = new QUdpSocket();
    connect(udpsock,SIGNAL(readyRead()), this, SLOT(slot_readyRead()));
}

MainWindow_region::~MainWindow_region()
{
    delete ui;
}

void MainWindow_region::on_pushButton_clicked()
{
    QString user_str = ui->line_name->text();
    QString passwrd_str = ui->line_pass->text() ;
    QString age_str = ui->line_age->text() ;
    QString doctname_str = ui->line_doctname->text();
    QString temp_str = ui->line_tempr->text() ;
    QString puls_str = ui->line_puls->text() ;
    QString record_str = ui->line_record->text();


    if(user_str.isEmpty()||passwrd_str.isEmpty()||
            age_str.isEmpty()||doctname_str.isEmpty()||temp_str.isEmpty()||
            puls_str.isEmpty()||record_str.isEmpty())
    {

        QMessageBox::information(this, "注册信息", "注册信息请填写完整.");
        return ;
    }

    int sex;
    if(ui->rbtn_man->isCheckable()==true)
    {
        sex = MALE;
    }
    else
    {
        sex = FAMALE;

    }


    //封装数据：结构体
    //user_str.toStdString().c_str()
    //功能：将QString转换位C语言字符串
    struct reg_struct reg;
    qsnprintf(reg.reg_user, 20, user_str.toStdString().c_str());
    qsnprintf(reg.reg_passwrd, 20, passwrd_str.toStdString().c_str());
    qsnprintf(reg.reg_doctname, 20, doctname_str.toStdString().c_str());
    qsnprintf(reg.reg_record,100, record_str.toStdString().c_str());

    reg.reg_age = age_str.toInt();
    reg.reg_sex = sex;
    reg.reg_tempr = temp_str.toInt();
    reg.reg_pulse = puls_str.toInt();
    qDebug()<<user_str<<":"<<passwrd_str<<":"<<age_str<<":"<<sex<<":"
           << doctname_str<<":"<<temp_str<<":"<<puls_str<<":"<<record_str;



    //2.将注册信息通过网络发送给服务器端（云端）
    /*qint64 QUdpSocket::writeDatagram(const char *data, qint64 size, const QHostAddress &address, quint16 port)
       const QByteArray &datagram:发送的数据
       size
       const QHostAddress &host:目的IP地址
       quint16 port：目的IP端口号

    */

    QHostAddress *addr = new QHostAddress(REg_SERVER_IP);
    qint64 ret = udpsock->writeDatagram((char *)&reg, sizeof(reg), *addr, REG_SERVER_PORt);


    if(ret == -1)
     {
        QMessageBox::information(this, "error", "upd error.");//发送失败
        return ;
     }

      QMessageBox::information(this, "write info", "upd succed,wait a minute");//发送成功，等待服务器回应
    //如果是登录，云端吧数据库中信息取出来进行比对，再把登录信息传给用户
}
void MainWindow_region::slot_readyRead()
{
    struct result_struct result;
    udpsock->readDatagram((char *)&result, sizeof(struct result_struct));
    if(result.result == 1)
    {
        QMessageBox::information(this, "注册结果", "注册成功");

    }
    else
        {
          QMessageBox::information(this, "注册结果", "注册失败");
         }

}
