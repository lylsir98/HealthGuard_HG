/********************************************************************************
** Form generated from reading UI file 'doctor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOR_H
#define UI_DOCTOR_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doctor
{
public:
    QWidget *centralwidget;
    QLineEdit *ledit_doctnam;
    QLineEdit *ledit_passwd;
    QPushButton *btn_doctlogin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *doctor)
    {
        if (doctor->objectName().isEmpty())
            doctor->setObjectName(QStringLiteral("doctor"));
        doctor->resize(400, 300);
        centralwidget = new QWidget(doctor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ledit_doctnam = new QLineEdit(centralwidget);
        ledit_doctnam->setObjectName(QStringLiteral("ledit_doctnam"));
        ledit_doctnam->setGeometry(QRect(140, 50, 113, 20));
        ledit_passwd = new QLineEdit(centralwidget);
        ledit_passwd->setObjectName(QStringLiteral("ledit_passwd"));
        ledit_passwd->setGeometry(QRect(140, 100, 113, 20));
        btn_doctlogin = new QPushButton(centralwidget);
        btn_doctlogin->setObjectName(QStringLiteral("btn_doctlogin"));
        btn_doctlogin->setGeometry(QRect(160, 160, 75, 23));
        doctor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(doctor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 23));
        doctor->setMenuBar(menubar);
        statusbar = new QStatusBar(doctor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        doctor->setStatusBar(statusbar);

        retranslateUi(doctor);

        QMetaObject::connectSlotsByName(doctor);
    } // setupUi

    void retranslateUi(QMainWindow *doctor)
    {
        doctor->setWindowTitle(QApplication::translate("doctor", "MainWindow", Q_NULLPTR));
        btn_doctlogin->setText(QApplication::translate("doctor", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class doctor: public Ui_doctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOR_H
