#-------------------------------------------------
#
# Project created by QtCreator 2014-01-31T12:02:17
#
#-------------------------------------------------

QT       += core gui
QT += widgets

TARGET = DemoProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    keyboard.cpp \
    middleware.cpp\
    pButtons.cpp

HEADERS  += mainwindow.h \
    middleware.h \
    PredictCallback.h

FORMS    += mainwindow.ui

LIBS += -lpresage
