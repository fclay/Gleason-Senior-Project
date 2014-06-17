#include <QtWidgets/QApplication>
#include <QWidget>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setStyleSheet("background:transparent;");
    //w.setAttribute(Qt::WA_TranslucentBackground);
    //w.setWindowFlags(Qt::FramelessWindowHint);
    w.setWindowFlags(Qt::WindowStaysOnTopHint); //Window always on top
    w.show();

    return a.exec();
}
