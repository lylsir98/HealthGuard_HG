/********************************************************************************
** Form generated from reading UI file 'mainwindow_pa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_PA_H
#define UI_MAINWINDOW_PA_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_pa
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *line_temper;
    QPushButton *btn_call;
    QLineEdit *line_countin;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *line_puls;
    QLabel *label_3;
    QPushButton *btn_shuju;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_pa)
    {
        if (MainWindow_pa->objectName().isEmpty())
            MainWindow_pa->setObjectName(QStringLiteral("MainWindow_pa"));
        MainWindow_pa->resize(404, 350);
        centralwidget = new QWidget(MainWindow_pa);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 100, 71, 16));
        line_temper = new QLineEdit(centralwidget);
        line_temper->setObjectName(QStringLiteral("line_temper"));
        line_temper->setGeometry(QRect(100, 100, 113, 20));
        btn_call = new QPushButton(centralwidget);
        btn_call->setObjectName(QStringLiteral("btn_call"));
        btn_call->setGeometry(QRect(350, 230, 41, 31));
        btn_call->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/son.png);"));
        line_countin = new QLineEdit(centralwidget);
        line_countin->setObjectName(QStringLiteral("line_countin"));
        line_countin->setGeometry(QRect(60, 30, 113, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 411, 281));
        label_2->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/dialog2.png)"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 230, 41, 31));
        pushButton->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/send.png)"));
        line_puls = new QLineEdit(centralwidget);
        line_puls->setObjectName(QStringLiteral("line_puls"));
        line_puls->setGeometry(QRect(100, 150, 113, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 150, 54, 12));
        btn_shuju = new QPushButton(centralwidget);
        btn_shuju->setObjectName(QStringLiteral("btn_shuju"));
        btn_shuju->setGeometry(QRect(110, 220, 75, 23));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 120, 271, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 180, 241, 16));
        MainWindow_pa->setCentralWidget(centralwidget);
        label_2->raise();
        label->raise();
        line_temper->raise();
        btn_call->raise();
        line_countin->raise();
        pushButton->raise();
        line_puls->raise();
        label_3->raise();
        btn_shuju->raise();
        label_4->raise();
        label_5->raise();
        menubar = new QMenuBar(MainWindow_pa);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 404, 23));
        MainWindow_pa->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_pa);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_pa->setStatusBar(statusbar);

        retranslateUi(MainWindow_pa);

        QMetaObject::connectSlotsByName(MainWindow_pa);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_pa)
    {
        MainWindow_pa->setWindowTitle(QApplication::translate("MainWindow_pa", "\350\200\201\345\271\264\344\272\272\345\201\245\345\272\267\345\256\210\346\212\244\357\274\214\345\256\211\345\277\203\357\274\214\346\224\276\345\277\203", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow_pa", "\345\275\223\345\211\215\344\275\223\346\270\251", Q_NULLPTR));
        btn_call->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QString());
        label_3->setText(QApplication::translate("MainWindow_pa", "  \350\204\211\346\220\217", Q_NULLPTR));
        btn_shuju->setText(QApplication::translate("MainWindow_pa", "\350\216\267\345\217\226\346\225\260\346\215\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow_pa", "\357\274\201\357\274\210\350\213\245\344\275\216\344\272\21635\302\260C\346\210\226\351\253\230\344\272\21637.5\302\260C\350\257\267\345\217\212\346\227\266\350\201\224\347\263\273\345\214\273\347\224\237\357\274\211", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow_pa", "\357\274\201\350\213\245\350\266\205\345\207\272\346\255\243\345\270\270\350\214\203\345\233\264\357\274\21060~100/\345\210\206\357\274\211\350\257\267\345\217\212\346\227\266\345\260\261\345\214\273", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_pa: public Ui_MainWindow_pa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_PA_H
