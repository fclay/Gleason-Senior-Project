#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QProcess>
#include <QtWidgets/QMainWindow>
#include<QStringListModel>
#include<QStandardItemModel>
#include <QStyle>
#include <presage.h>
#include <iostream>
#include <thread>
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
    void connectPButtons();

private slots:
    void tVPredict();
    void clearTxt();
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
    void enter_pressed();
    void start_Button_Pressed();
    void say_pressed();
    void mouse_pressed();
    void send_pressed();
    //Prediction button code

    void p1_pressed();
    void p2_pressed();
    void p3_pressed();
    void p4_pressed();
    void p5_pressed();
    void p6_pressed();
    void p7_pressed();
    void p8_pressed();
    void p9_pressed();
    void p10_pressed();
    void p11_pressed();
    void p12_pressed();
    void p13_pressed();
    void p14_pressed();
    void p15_pressed();
    void p16_pressed();
    void p17_pressed();
    void p18_pressed();
    void p19_pressed();
    void p20_pressed();
    void p21_pressed();
    void p22_pressed();
    void p23_pressed();
    void p24_pressed();
    void p25_pressed();
    void p26_pressed();
    void p27_pressed();
    void p28_pressed();
    void p29_pressed();
    void p30_pressed();



    
private:
    //required for presage
    Middleware *myMiddle;

    //the ui
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
