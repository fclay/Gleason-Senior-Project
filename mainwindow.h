#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <presage.h>
#include<QStringListModel>
#include<QStandardItemModel>
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
    void selectP();
    void tVPredict();
    void clearTxt();
    void changeSize();
    void changeColor();
    
private:
    //required for presage
    std::string *context;
    ExampleCallback* callback;
    Presage* presage;

    QStandardItemModel *myModel;

    //the ui
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
