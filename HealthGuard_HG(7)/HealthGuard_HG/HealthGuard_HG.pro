#-------------------------------------------------
#
# Project created by QtCreator 2020-07-22T23:12:08
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HealthGuard_HG
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    mainwindow_pa.cpp \
    mainwindow_child.cpp \
    mainwindow_region.cpp \
    mainwindow_help.cpp \
    doctor.cpp \
    app_website.cpp

HEADERS += \
        mainwindow.h \
    mainwindow_pa.h \
    mainwindow_child.h \
    mainwindow_region.h \
    mainwindow_help.h \
    doctor.h \
    app_website.h

FORMS += \
        mainwindow.ui \
    mainwindow_pa.ui \
    mainwindow_child.ui \
    mainwindow_region.ui \
    mainwindow_help.ui \
    doctor.ui \
    app_website.ui

RESOURCES += \
    pic.qrc


