#include "mainwindow_help.h"
#include "ui_mainwindow_help.h"

MainWindow_help::MainWindow_help(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_help)
{
    ui->setupUi(this);
    setFixedSize(730,472);
    ui->label_2->setVisible(0);
    ui->label_3->setVisible(0);
    ui->label_4->setVisible(0);
}

MainWindow_help::~MainWindow_help()
{
    delete ui;
}

void MainWindow_help::on_btn_buy_clicked()
{
    if(x==0)
        ui->label_2->setVisible(1);
    else
        ui->label_2->setVisible(0);
    x=1-x;
}

void MainWindow_help::on_btn_buy2_clicked()
{
    if(y==0)
        ui->label_3->setVisible(1);
    else
        ui->label_3->setVisible(0);
    y=1-y;
}

void MainWindow_help::on_btn_buy3_clicked()
{
    if(z==0)
        ui->label_4->setVisible(1);
    else
        ui->label_4->setVisible(0);
    z=1-z;
}
