#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <presage.h>
#include<QStringListModel>
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
    void lPredict();
    void selectP();
    
private:
    //required for presage
    std::string *context;
    ExampleCallback* callback;
    Presage* presage;

    //required for listView
    QVariant myVar;
    QStringListModel *lModel;

    //the ui
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
