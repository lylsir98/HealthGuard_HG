/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *line_count;
    QLineEdit *line_pass;
    QPushButton *pushButton;
    QPushButton *btn_region;
    QPushButton *pushButton_3;
    QPushButton *btn_doctor;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(429, 325);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QStringLiteral("#centralWidget{border-image:url(:/new/prefix1/backgroud.png)}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line_count = new QLineEdit(centralWidget);
        line_count->setObjectName(QStringLiteral("line_count"));
        line_count->setGeometry(QRect(120, 140, 191, 21));
        line_pass = new QLineEdit(centralWidget);
        line_pass->setObjectName(QStringLiteral("line_pass"));
        line_pass->setGeometry(QRect(120, 170, 191, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 230, 141, 23));
        pushButton->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/icon.png)"));
        btn_region = new QPushButton(centralWidget);
        btn_region->setObjectName(QStringLiteral("btn_region"));
        btn_region->setGeometry(QRect(0, 240, 75, 31));
        btn_region->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/region.png)"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 240, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("border-image:url(:/new/prefix1/help.png)"));
        btn_doctor = new QPushButton(centralWidget);
        btn_doctor->setObjectName(QStringLiteral("btn_doctor"));
        btn_doctor->setGeometry(QRect(340, 210, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 429, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\200\201\345\271\264\344\272\272\345\201\245\345\272\267\345\256\210\346\212\244\345\271\263\345\217\260  1.1.2  \344\270\223\344\270\232\347\211\210  \345\206\205\346\265\213", Q_NULLPTR));
        pushButton->setText(QString());
        btn_region->setText(QString());
        pushButton_3->setText(QString());
        btn_doctor->setText(QApplication::translate("MainWindow", "\345\214\273\347\224\237\345\205\245\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
