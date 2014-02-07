#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    //initalize presage
    //Do we want to make a new instance of presage every time?
    //or load one from a file that retains information.
    context = new std::string();
    callback = new ExampleCallback(*context);
    presage = new Presage(callback);

    //initalize UI
    ui->setupUi(this);

    //Connect Signals and Slots
    QObject::connect(ui->textIn, SIGNAL(textChanged(QString)), this, SLOT(lPredict()));
    QObject::connect(ui->listView, SIGNAL(clicked(QModelIndex)), this, SLOT(selectP()));

}

//This function resets the context every time the user changes the text
//I'm not sure if this is how Presage likes taking input so we will have to test
//to see if it is behaving properly.
void MainWindow::lPredict()
{
    //Get the text
    QString inString = ui->textIn->text();
    //Convert to standard string
    std::string theStr = inString.toStdString();

    //make model for listView
    lModel = new QStringListModel();
    ui->listView->setModel(lModel);

    //reset Presage context
    context->clear();
    context->append(theStr);

    //Get predictions
    std::vector< std::string > predictions = presage->predict();

    for (int i = 0; i < predictions.size(); i++) {
        //add row to list
        ui->listView->model()->insertRow(i);
        //convert to QVariant
        myVar = QVariant(predictions[i].c_str());
        //add to list model
        ui->listView->model()->setData(ui->listView->model()->index(i,0),myVar);
    }

    //update list
    ui->listView->update();

}

void MainWindow::selectP()
{
    //get text
    QString myStr = ui->textIn->text();
    //get end index of string
    int x = (myStr.length()-1);
    //Replace current word
    if (myStr.at(myStr.length()-1) != ' ')
    {
        while(myStr.at(x) != ' ')
        {
        myStr.chop(1);
        x--;
        }
        //append current selection
        myStr.append(ui->listView->model()->data(ui->listView->currentIndex()).toString());
    }
    else
    {
        //append current selection
        myStr.append(ui->listView->model()->data(ui->listView->currentIndex()).toString());
    }

    //reset text
    ui->textIn->setText(myStr);

}

MainWindow::~MainWindow()
{
    delete ui;
}
