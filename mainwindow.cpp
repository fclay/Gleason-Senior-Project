#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    //initalize middleware
    //Do we want to make a new instance of presage every time?
    //or load one from a file that retains information.
    //on one of my computers it remembers what I have typed, but not on the other computer

    myMiddle = new Middleware();
    myMiddle->initPresage ();

    //initalize UI
    ui->setupUi(this);

    //make new model for tableview
    myModel = new QStandardItemModel(6, 1, this);
    ui->tableView->setModel (myModel);
    ui->tableView->update();

    connectKeyboard();

    //Connect Signals and Slots
    QObject::connect(ui->textIn, SIGNAL(textChanged(QString)), this, SLOT(tVPredict()));
    QObject::connect(ui->tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(selectP()));
    QObject::connect(ui->clearBtn, SIGNAL(clicked()), this, SLOT(clearTxt()));

}

void MainWindow::tVPredict()
{
    myModel = new QStandardItemModel(6, ui->spinBox->value(), this);
    QStandardItem *item;

    QString blah = "";
    //Get the text
    QString inString = ui->textIn->text();
    //Convert to standard string
    std::string theStr = inString.toStdString();

    //reset Presage context
    myMiddle->context->clear ();
    myMiddle->context->append(theStr);

    //Get predictions
    std::vector< std::string > predictions = myMiddle->predictEngine->predict();


    //fill out first column
    for (int i = 0; i<predictions.size(); i++)
    {
        item = new QStandardItem(QString(predictions[i].c_str()));
        myModel->setItem(i,0, item);
    }

    // if a word at the end of inString is complete
    if (inString.at(inString.size () - 1) == ' ')
    {
        //fill out other colums based upon the spinbox value
        for (int i = 1; i < ui->spinBox->value(); i++)
        {
            //same as above, but predictions are based on the first item of the last column
            theStr.append(myModel->item (0,(i-1))->text ().toStdString ());
            theStr.append(" ");
            myMiddle->context->clear();
            myMiddle->context->append(theStr);
            predictions = myMiddle->predictEngine->predict();
            for (int x = 0; x < predictions.size(); x++)
            {
                item = new QStandardItem(QString(predictions[x].c_str()));
                myModel->setItem(x,i, item);
            }
        }

    }


    ui->tableView->setModel(myModel);
    ui->tableView->update ();
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
        myStr.append(myModel->itemFromIndex (ui->tableView->currentIndex ())->text ());
        myStr.append(" ");
    }
    //this took me forever to figure out
    else
    {

        for (int x = 0; x < ((ui->tableView->currentIndex ().column ())+1); x++ )
        {
            if (x != ui->tableView->currentIndex ().column ())
            {
                //append first row up to the column you are at
                myStr.append(myModel->item (0,x)->text ());
                myStr.append(" ");
            }
            else
            {
                //append current selection
                myStr.append(myModel->itemFromIndex (ui->tableView->currentIndex ())->text ());
                myStr.append(" ");
            }
        }
    }

    //reset text
    ui->textIn->setText(myStr);

}

void MainWindow::changeColor()
{
    //QModelIndex *myIndex = myModel->index (0,0,this);
    //QBrush *red = new QBrush(Qt::red);
    //ui->tableView->setData (myIndex, red, Qt::BackgroundColorRole);

}

void MainWindow::clearTxt()
{
    ui->textIn->clear ();
}

void MainWindow::changeSize()
{
    myModel = new QStandardItemModel(6, ui->spinBox->value(), this);
    ui->tableView->update ();
}

MainWindow::~MainWindow()
{
    delete ui;
}
