#-------------------------------------------------
#
# Project created by QtCreator 2014-01-31T12:02:17
#
#-------------------------------------------------

QT       += core gui
QT += widgets

TARGET = DemoProject
TEMPLATE = app

CONFIG += c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    keyboard.cpp \
    middleware.cpp\
    pButtons.cpp \
    hoverbutton.cpp \
    settings.cpp

HEADERS  += mainwindow.h \
    middleware.h \
    PredictCallback.h \
    hoverbutton.h \
    settings.h

FORMS    += mainwindow.ui \
    settings.ui

LIBS += -lpresage
