#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    context = new std::string();
    callback = new ExampleCallback(*context);
    presage = new Presage(callback);


    ui->setupUi(this);


    QObject::connect(ui->textIn, SIGNAL(textChanged(QString)), this, SLOT(magicPredict()));

}


void MainWindow::magicPredict()
{
    ui->textOut->clear();

    QString inString = ui->textIn->text();
    std::string theStr = inString.toStdString();
    std::string otherStr = "";
    QString outString = "";

    context->clear();
    context->append(theStr);

    std::vector< std::string > predictions = presage->predict();

    for (int i = 0; i < predictions.size(); i++) {
        otherStr =  (predictions[i]);
        outString.append(otherStr.c_str());
        outString.append("\n");
    }

    ui->textOut->append(outString);

}

void MainWindow::lPredict()
{

    QString inString = ui->textIn->text();
    std::string theStr = inString.toStdString();

    context->clear();
    context->append(theStr);

    std::vector< std::string > predictions = presage->predict();
    ui->listView->setString(predictions[0]);

}


MainWindow::~MainWindow()
{
    delete ui;
}