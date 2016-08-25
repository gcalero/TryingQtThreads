#-------------------------------------------------
#
# Project created by QtCreator 2016-08-25T16:49:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TryingThread
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    accountmanager.cpp \
    myapplication.cpp

HEADERS  += mainwindow.h \
    accountmanager.h \
    myapplication.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

