#include <QtWidgets/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //QApplication::setDesktopSettingsAware(false);
    //QApplication::setStyle(new QPlastiqueStyle);
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    
    return a.exec();
}
