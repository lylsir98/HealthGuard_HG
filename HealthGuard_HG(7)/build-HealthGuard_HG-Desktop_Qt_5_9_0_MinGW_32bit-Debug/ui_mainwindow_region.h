/********************************************************************************
** Form generated from reading UI file 'mainwindow_region.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_REGION_H
#define UI_MAINWINDOW_REGION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_region
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_name;
    QLineEdit *line_pass;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbtn_man;
    QRadioButton *rbtn_woman;
    QLineEdit *line_age;
    QLineEdit *line_doctname;
    QLineEdit *line_tempr;
    QPushButton *pushButton;
    QLineEdit *line_puls;
    QLabel *label_8;
    QLineEdit *line_record;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_region)
    {
        if (MainWindow_region->objectName().isEmpty())
            MainWindow_region->setObjectName(QStringLiteral("MainWindow_region"));
        MainWindow_region->resize(665, 403);
        centralwidget = new QWidget(MainWindow_region);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 658, 364));
        label->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/region2.png)"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 80, 51, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(370, 80, 221, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        line_name = new QLineEdit(verticalLayoutWidget_2);
        line_name->setObjectName(QStringLiteral("line_name"));

        verticalLayout_2->addWidget(line_name);

        line_pass = new QLineEdit(verticalLayoutWidget_2);
        line_pass->setObjectName(QStringLiteral("line_pass"));

        verticalLayout_2->addWidget(line_pass);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbtn_man = new QRadioButton(verticalLayoutWidget_2);
        rbtn_man->setObjectName(QStringLiteral("rbtn_man"));

        horizontalLayout->addWidget(rbtn_man);

        rbtn_woman = new QRadioButton(verticalLayoutWidget_2);
        rbtn_woman->setObjectName(QStringLiteral("rbtn_woman"));

        horizontalLayout->addWidget(rbtn_woman);


        verticalLayout_2->addLayout(horizontalLayout);

        line_age = new QLineEdit(verticalLayoutWidget_2);
        line_age->setObjectName(QStringLiteral("line_age"));

        verticalLayout_2->addWidget(line_age);

        line_doctname = new QLineEdit(verticalLayoutWidget_2);
        line_doctname->setObjectName(QStringLiteral("line_doctname"));

        verticalLayout_2->addWidget(line_doctname);

        line_tempr = new QLineEdit(verticalLayoutWidget_2);
        line_tempr->setObjectName(QStringLiteral("line_tempr"));

        verticalLayout_2->addWidget(line_tempr);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 281, 131, 21));
        pushButton->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/region_now.png)"));
        line_puls = new QLineEdit(centralwidget);
        line_puls->setObjectName(QStringLiteral("line_puls"));
        line_puls->setGeometry(QRect(370, 230, 221, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 230, 49, 20));
        line_record = new QLineEdit(centralwidget);
        line_record->setObjectName(QStringLiteral("line_record"));
        line_record->setGeometry(QRect(370, 255, 221, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(300, 260, 49, 20));
        MainWindow_region->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_region);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 665, 23));
        MainWindow_region->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_region);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_region->setStatusBar(statusbar);

        retranslateUi(MainWindow_region);

        QMetaObject::connectSlotsByName(MainWindow_region);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_region)
    {
        MainWindow_region->setWindowTitle(QApplication::translate("MainWindow_region", "\350\264\246\345\217\267\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow_region", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow_region", "\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow_region", "\345\271\264\351\276\204", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow_region", "\346\200\247\345\210\253", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow_region", "\345\260\261\350\257\212\345\214\273\347\224\237", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow_region", "\344\275\223\346\270\251", Q_NULLPTR));
        rbtn_man->setText(QApplication::translate("MainWindow_region", "\347\224\267", Q_NULLPTR));
        rbtn_woman->setText(QApplication::translate("MainWindow_region", "\345\245\263", Q_NULLPTR));
        pushButton->setText(QString());
        label_8->setText(QApplication::translate("MainWindow_region", "\350\204\211\346\220\217", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow_region", "\345\260\261\350\257\212\350\256\260\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_region: public Ui_MainWindow_region {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_REGION_H
