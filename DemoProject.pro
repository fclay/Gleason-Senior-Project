#-------------------------------------------------
#
# Project created by QtCreator 2014-01-31T12:02:17
#
#-------------------------------------------------

QT       += core gui

TARGET = DemoProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    keyboard.cpp \
    middleware.cpp

HEADERS  += mainwindow.h \
         ExampleCallback.h \
    middleware.h

FORMS    += mainwindow.ui

LIBS += -lpresage
