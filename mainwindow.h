#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <presage.h>
#include<QStringListModel>
#include<QStandardItemModel>
#include "ExampleCallback.h"
#include "middleware.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public: 

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void connectKeyboard();

private slots:
    void selectP();
    void tVPredict();
    void clearTxt();
    void changeSize();
    void changeColor();

    //keyboard code

    void aBtn_pressed();
    void bBtn_pressed();
    void cBtn_pressed();
    void dBtn_pressed();
    void eBtn_pressed();
    void fBtn_pressed();
    void gBtn_pressed();
    void hBtn_pressed();
    void iBtn_pressed();
    void jBtn_pressed();
    void kBtn_pressed();
    void lBtn_pressed();
    void mBtn_pressed();
    void nBtn_pressed();
    void oBtn_pressed();
    void pBtn_pressed();
    void qBtn_pressed();
    void rBtn_pressed();
    void sBtn_pressed();
    void tBtn_pressed();
    void uBtn_pressed();
    void vBtn_pressed();
    void wBtn_pressed();
    void xBtn_pressed();
    void yBtn_pressed();
    void zBtn_pressed();
    void shift_pressed();
    void alt1_pressed();
    void back_space();
    void space_pressed();
    void period_pressed();
    void comma_pressed();

    
private:
    //required for presage
    Middleware *myMiddle;

    QStandardItemModel *myModel;

    //the ui
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
