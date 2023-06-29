#ifndef MAINWINDOW_HELP_H
#define MAINWINDOW_HELP_H

#include <QMainWindow>

namespace Ui {
class MainWindow_help;
}

class MainWindow_help : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_help(QWidget *parent = 0);
    ~MainWindow_help();
    int x=0,y=0,z=0;

private slots:
    void on_btn_buy_clicked();

    void on_btn_buy2_clicked();

    void on_btn_buy3_clicked();

private:
    Ui::MainWindow_help *ui;
};

#endif // MAINWINDOW_HELP_H
