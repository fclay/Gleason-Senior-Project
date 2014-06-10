#include <QtWidgets/QApplication>
#include <QWidget>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::WindowStaysOnTopHint); //Window always on top
    w.show();

    return a.exec();
}
