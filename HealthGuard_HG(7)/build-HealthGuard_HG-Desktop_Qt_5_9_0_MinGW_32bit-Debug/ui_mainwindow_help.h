/********************************************************************************
** Form generated from reading UI file 'mainwindow_help.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_HELP_H
#define UI_MAINWINDOW_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_help
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_buy;
    QPushButton *btn_buy2;
    QPushButton *btn_buy3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_help)
    {
        if (MainWindow_help->objectName().isEmpty())
            MainWindow_help->setObjectName(QStringLiteral("MainWindow_help"));
        MainWindow_help->resize(732, 525);
        centralwidget = new QWidget(MainWindow_help);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 731, 471));
        label->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/help2.png);"));
        btn_buy = new QPushButton(centralwidget);
        btn_buy->setObjectName(QStringLiteral("btn_buy"));
        btn_buy->setGeometry(QRect(60, 160, 131, 41));
        btn_buy->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/buy.png);"));
        btn_buy2 = new QPushButton(centralwidget);
        btn_buy2->setObjectName(QStringLiteral("btn_buy2"));
        btn_buy2->setGeometry(QRect(300, 160, 131, 41));
        btn_buy2->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/buy.png);"));
        btn_buy3 = new QPushButton(centralwidget);
        btn_buy3->setObjectName(QStringLiteral("btn_buy3"));
        btn_buy3->setGeometry(QRect(530, 160, 131, 41));
        btn_buy3->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/buy.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 210, 191, 221));
        label_2->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/mark.png)"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 210, 181, 211));
        label_3->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/mark2.png)"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 210, 181, 221));
        label_4->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/mark3.png)"));
        MainWindow_help->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_help);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 732, 23));
        MainWindow_help->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_help);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_help->setStatusBar(statusbar);

        retranslateUi(MainWindow_help);

        QMetaObject::connectSlotsByName(MainWindow_help);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_help)
    {
        MainWindow_help->setWindowTitle(QApplication::translate("MainWindow_help", "\344\275\277\347\224\250\345\270\256\345\212\251", Q_NULLPTR));
        label->setText(QString());
        btn_buy->setText(QString());
        btn_buy2->setText(QString());
        btn_buy3->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow_help: public Ui_MainWindow_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_HELP_H
