/********************************************************************************
** Form generated from reading UI file 'app_website.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_WEBSITE_H
#define UI_APP_WEBSITE_H

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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_app_website
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_huoqu;
    QTreeWidget *tree_tabl;
    QLabel *label;
    QPushButton *btn_patient_info;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *app_website)
    {
        if (app_website->objectName().isEmpty())
            app_website->setObjectName(QStringLiteral("app_website"));
        app_website->resize(900, 600);
        centralwidget = new QWidget(app_website);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 101, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 240, 111, 16));
        btn_huoqu = new QPushButton(centralwidget);
        btn_huoqu->setObjectName(QStringLiteral("btn_huoqu"));
        btn_huoqu->setGeometry(QRect(720, 490, 101, 23));
        tree_tabl = new QTreeWidget(centralwidget);
        tree_tabl->setObjectName(QStringLiteral("tree_tabl"));
        tree_tabl->setGeometry(QRect(630, 20, 251, 451));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 380, 71, 16));
        btn_patient_info = new QPushButton(centralwidget);
        btn_patient_info->setObjectName(QStringLiteral("btn_patient_info"));
        btn_patient_info->setGeometry(QRect(630, 490, 80, 20));
        app_website->setCentralWidget(centralwidget);
        menubar = new QMenuBar(app_website);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
        app_website->setMenuBar(menubar);
        statusbar = new QStatusBar(app_website);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        app_website->setStatusBar(statusbar);

        retranslateUi(app_website);

        QMetaObject::connectSlotsByName(app_website);
    } // setupUi

    void retranslateUi(QMainWindow *app_website)
    {
        app_website->setWindowTitle(QApplication::translate("app_website", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("app_website", "\350\241\200\346\260\247\351\245\261\345\222\214\346\233\262\347\272\277", Q_NULLPTR));
        label_3->setText(QApplication::translate("app_website", "\344\275\223\346\270\251\345\217\230\345\214\226\346\233\262\347\272\277\345\233\276", Q_NULLPTR));
        btn_huoqu->setText(QApplication::translate("app_website", "\350\216\267\345\217\226\346\202\243\350\200\205\344\277\241\346\201\257", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = tree_tabl->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("app_website", "\346\202\243\350\200\205", Q_NULLPTR));
        label->setText(QApplication::translate("app_website", "\350\204\211\346\220\217\346\233\262\347\272\277", Q_NULLPTR));
        btn_patient_info->setText(QApplication::translate("app_website", "huo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class app_website: public Ui_app_website {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_WEBSITE_H
