/********************************************************************************
** Form generated from reading UI file 'mainwindow_child.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_CHILD_H
#define UI_MAINWINDOW_CHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_child
{
public:
    QWidget *centralwidget;
    QLineEdit *line_countin2;
    QTextEdit *tedit_sndquest;
    QTextBrowser *tbrow_rec;
    QLabel *label;
    QPushButton *btn_sndquest;
    QLabel *label_2;
    QLineEdit *line_temp;
    QLineEdit *line_puls;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btn_shuju;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_child)
    {
        if (MainWindow_child->objectName().isEmpty())
            MainWindow_child->setObjectName(QStringLiteral("MainWindow_child"));
        MainWindow_child->resize(647, 381);
        centralwidget = new QWidget(MainWindow_child);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        line_countin2 = new QLineEdit(centralwidget);
        line_countin2->setObjectName(QStringLiteral("line_countin2"));
        line_countin2->setGeometry(QRect(70, 60, 113, 20));
        tedit_sndquest = new QTextEdit(centralwidget);
        tedit_sndquest->setObjectName(QStringLiteral("tedit_sndquest"));
        tedit_sndquest->setGeometry(QRect(30, 210, 141, 61));
        tbrow_rec = new QTextBrowser(centralwidget);
        tbrow_rec->setObjectName(QStringLiteral("tbrow_rec"));
        tbrow_rec->setGeometry(QRect(180, 210, 141, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 481, 441));
        label->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/dialog2.png)"));
        btn_sndquest = new QPushButton(centralwidget);
        btn_sndquest->setObjectName(QStringLiteral("btn_sndquest"));
        btn_sndquest->setGeometry(QRect(110, 280, 61, 23));
        btn_sndquest->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/send2.png)"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 190, 71, 16));
        line_temp = new QLineEdit(centralwidget);
        line_temp->setObjectName(QStringLiteral("line_temp"));
        line_temp->setGeometry(QRect(90, 100, 111, 20));
        line_puls = new QLineEdit(centralwidget);
        line_puls->setObjectName(QStringLiteral("line_puls"));
        line_puls->setGeometry(QRect(90, 150, 111, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 71, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 61, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 130, 261, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 170, 261, 21));
        btn_shuju = new QPushButton(centralwidget);
        btn_shuju->setObjectName(QStringLiteral("btn_shuju"));
        btn_shuju->setGeometry(QRect(280, 150, 75, 23));
        MainWindow_child->setCentralWidget(centralwidget);
        label->raise();
        line_countin2->raise();
        tedit_sndquest->raise();
        tbrow_rec->raise();
        btn_sndquest->raise();
        label_2->raise();
        line_temp->raise();
        line_puls->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        btn_shuju->raise();
        menubar = new QMenuBar(MainWindow_child);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 647, 23));
        MainWindow_child->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_child);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_child->setStatusBar(statusbar);

        retranslateUi(MainWindow_child);

        QMetaObject::connectSlotsByName(MainWindow_child);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_child)
    {
        MainWindow_child->setWindowTitle(QApplication::translate("MainWindow_child", "\350\200\201\345\271\264\344\272\272\345\201\245\345\272\267\345\256\210\346\212\244\357\274\214\345\256\211\345\277\203\357\274\214\346\224\276\345\277\203", Q_NULLPTR));
        label->setText(QString());
        btn_sndquest->setText(QString());
        label_2->setText(QApplication::translate("MainWindow_child", "\346\234\211\344\272\213\351\227\256\345\214\273\347\224\237\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow_child", "\346\202\243\350\200\205\345\275\223\345\211\215\344\275\223\346\270\251", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow_child", "\345\275\223\345\211\215\350\204\211\346\220\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow_child", "\357\274\201\357\274\210\350\213\245\344\275\216\344\272\21635\302\260C\346\210\226\351\253\230\344\272\21637.5\302\260C\350\257\267\345\217\212\346\227\266\350\201\224\347\263\273\345\214\273\347\224\237\357\274\211", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow_child", "\357\274\201\350\213\245\350\266\205\345\207\272\346\255\243\345\270\270\350\214\203\345\233\264\357\274\21060~100/\345\210\206\357\274\211\350\257\267\345\217\212\346\227\266\345\260\261\345\214\273", Q_NULLPTR));
        btn_shuju->setText(QApplication::translate("MainWindow_child", "\350\216\267\345\217\226\346\225\260\346\215\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_child: public Ui_MainWindow_child {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_CHILD_H
