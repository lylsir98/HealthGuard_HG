#include "app_website.h"
#include "ui_app_website.h"

app_website::app_website(QString doct1, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::app_website)
{
    ui->setupUi(this);
    doctnam = doct1;
    setWindowTitle(doctnam+"医生");//标题显示医生名字
    x=-10;
    u=-10;
    m_timer=new QTimer(this);
    m_timer->start(10);
    connect(m_timer,SIGNAL(timeout()),this,SLOT(Spo2_DemoData_produce()));
    udpsock=new QUdpSocket();
    udpsock3=new QUdpSocket();
    //connect(udpsock,SIGNAL(readyRead()), this, SLOT(slot_readyRead2()));

    //connect(udpsock3,SIGNAL(readyResult()), this, SLOT(slot_patient_result()));





}



app_website::~app_website()
{
    delete ui;
}

void app_website::on_btn_huoqu_clicked()
{




    //封装数据：结构体
    //user_str.toStdString().c_str()
    //功能：将QString转换位C语言字符串
    struct doctor_struct3 doctor;
    qsnprintf(doctor.doct_user, 20, doctnam.toStdString().c_str());

    qDebug()<<doctnam<<":";


    //向数据库发送信息
    QHostAddress *addr = new QHostAddress(REG_SERVER_IP);
    qint64 ret = udpsock->writeDatagram((char *)&doctor, sizeof(doctor), *addr, REG_SERVER_PORT22);


    if(ret == -1)
     {
        QMessageBox::information(this, "error", "upd error.");
        return ;
     }

      QMessageBox::information(this, "write info", "upd succed,wait a minute");//发送成功，等待数据库回应


}


void app_website::slot_readyRead2()
{
    struct result_struct3 result;



   while (udpsock->hasPendingDatagrams())
    {
        QTreeWidgetItem *patient_item = new QTreeWidgetItem(ui->tree_tabl);



                   udpsock->readDatagram((char *)&result,sizeof(struct result_struct3));
                   QString str_name=result.name;
                   QString str_age=result.age;
                   QString str_sex=result.sex;
                   QString str_temp=result.temp;
                   QString str_pulse=result.pulse;
                   QString str_record=result.record;
                   int age_int=str_age.toInt();
                   int sex_int=str_sex.toInt();
                   int temp_float=str_temp.toFloat();
                   int pulse_int=str_pulse.toInt();


                    patient_item->setText(0, str_name);
                   db= QSqlDatabase::addDatabase("QSQLITE","sqlite3");
                   db.setDatabaseName("E:\\2345Downloads\\project\\HealthGuard_HG(7)\\HealthGuard_HG\\patient_info");
                   if(!db.open())//打开成功成功true
                   {
                       qDebug()<<"open database is error";
                   }
                   else
                   {

                       qDebug()<<"open database is success";
                   }
                   QSqlQuery query(db);
                   QString sql_str("create table if not exists :a (id integer primary key autoincrement, name text , age integer , sex integer , temp float,pulse integer,record text);");
                   query.prepare(sql_str);
                   query.bindValue(":a",str_name);


                   if(!query.exec(sql_str))
                   {
                        qDebug()<<query.lastError();
                   }
                   else
                   {
                       qDebug()<<"creater table is success";
                       QString sql_str2("insert into patient_table(name,age,sex,temp,pulse,record) values(:a, :b, :c, :d  ,:e  ,:f);");
                       query.prepare(sql_str2);
                       query.bindValue(":a",str_name);
                       query.bindValue(":b",age_int);
                       query.bindValue(":c",sex_int);
                       query.bindValue(":d",temp_float);
                       query.bindValue(":d",pulse_int);
                       query.bindValue(":d",str_record);
                       query.exec();

                   }




                   connect(ui->tree_tabl,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), this, SLOT(slot_item_doubleClicked(QTreeWidgetItem*,int)));

                   qDebug()<<str_age;
                    db.close();


       }

}


 void app_website::slot_item_doubleClicked(QTreeWidgetItem *item,int )
 {
    qDebug()<<"item_double is clicked";
    struct login_struct dangepatien;

    QString patiennam = item->text(0);
    qsnprintf(dangepatien.flag, 20, patiennam.toStdString().c_str());

    qDebug()<<patiennam<<":";



    //向数据库发送信息
    QHostAddress *addr = new QHostAddress(REG_SERVER_IP);
    qint64 ret = udpsock3->writeDatagram((char *)&dangepatien, sizeof(dangepatien), *addr, REG_SERVER_PORT22);


    if(ret == -1)
     {
        QMessageBox::information(this, "error", "upd error.");
        return ;
     }

      QMessageBox::information(this, "write info", "upd succed,wait a minute");//发送成功，等待数据库回应
 }






 void app_website::paintEvent(QPaintEvent *)
 {

     QPainter painter(this);
     QPen pen;
     pen.setColor(Qt::red);
     pen.setStyle(Qt::SolidLine);
     pen.setWidth(0.5);
     painter.setPen(pen);

     painter.setViewport(0,160,480,130);
     painter.setWindow(-10,2,20,-4);
     painter.fillRect(-10,2,20,-4,Qt::black);
     //painter.setWindow(0,0,400,100);
     //painter.fillRect(0,0,400,100,Qt::black);
     for(int i=0;i<yList.count();i++)
     {
         if(i==0)
         {
             painter.drawPoint(QPointF(xList[i],yList[i]));
         }
         else
         {
             painter.drawLine(QPointF(xList[i-1],yList[i-1]),QPointF(xList[i],yList[i]));
         }
     }


 }


void app_website::on_btn_patient_info_clicked()
{





}



void app_website::Spo2_DemoData_produce(void)
{
    x+=0.05;

    xList.append(x);
    y = ((float)(Spo2_DemoData[count] * 286 / 0xff))/100 ;
    qDebug()<<y;
    yList.append(y);
    count++;
    if(count%2!=0)
    {
        update();
    }

    if(count>247)
    {
        count=0;
        flag++;
        if(flag==2)
        {
            xList.clear();
            yList.clear();
            x=-10;
            flag=0;
        }

    }
}




