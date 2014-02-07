#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <presage.h>
#include "ExampleCallback.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public: 

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void magicPredict();
    void lPredict();
    
private:
    std::string *context;
    ExampleCallback* callback;
    Presage* presage;

    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
