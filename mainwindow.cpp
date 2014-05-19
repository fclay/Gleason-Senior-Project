#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{

    //initalize middleware
    myMiddle = new Middleware();
    myMiddle->initPresage ();

    //initalize UI
    ui->setupUi(this);

    //connect buttons
    connectKeyboard();
    connectPButtons();

    //Connect Signals and Slots
    QObject::connect(ui->textIn, SIGNAL(textChanged(QString)), this, SLOT(tVPredict()));
    QObject::connect(ui->clearBtn, SIGNAL(clicked()), this, SLOT(clearTxt()));

}

void MainWindow::tVPredict()
{
    //Get the text
    QString inString = ui->textIn->text();
    //Convert to standard string
    std::string theStr = inString.toStdString();

    //Change the number of predictions to 6
    myMiddle->chNumSugg("6");

    //reset Presage context
    myMiddle->context->clear ();
    myMiddle->context->append(theStr);

    //Get predictions
    std::vector< std::string > predictions = myMiddle->predictEngine->predict();
    std::vector< std::string > tempVector;
    //first column
    if(predictions.empty())
        return;

    //resize the prediction vector
    MainWindow::update();
    predictions.resize(20);

    //change the number of predictions to 1
    myMiddle->chNumSugg("1");

    //so here is where it gets complicated
    //this first loop performs the predictions for the second column
    //places them into the prediction vector
    for(int i = 6; i < 11; i++)
    {
        myMiddle->context->clear();
        predictions[i-6].append(" ");
        myMiddle->context->append(predictions[i-6]);
        tempVector = myMiddle->predictEngine->predict();
        predictions[i] = tempVector[0];
    }

    //add a space to the last prediction added (needed for presage)
    predictions[5].append(" ");

    //third column
    for(int i = 11; i < 15; i++)
    {
        myMiddle->context->clear();
        predictions[i-5].append(" ");
        myMiddle->context->append(predictions[i-5]);
        tempVector = myMiddle->predictEngine->predict();
        predictions[i] = tempVector[0];
    }

    predictions[10].append(" ");

    //fourth column
    for(int i = 15; i < 18; i++)
    {
        myMiddle->context->clear();
        predictions[i-4].append(" ");
        myMiddle->context->append(predictions[i-4]);
        tempVector = myMiddle->predictEngine->predict();
        predictions[i] = tempVector[0];
    }

    predictions[10].append(" ");

    //fifth column
    for(int i = 18; i < 20; i++)
    {
        myMiddle->context->clear();
        predictions[i-3].append(" ");
        myMiddle->context->append(predictions[i-3]);
        tempVector = myMiddle->predictEngine->predict();
        predictions[i] = tempVector[0];
    }

    predictions[17].append(" ");
    predictions[18].append(" ");
    predictions[19].append(" ");

    //check for empty entries
    for(int i = 0; i < 20; i++)
    {
        if (predictions[i].empty())
            return;
    }

    //assign predictions to buttons
    ui->predict1->setText(predictions[0].c_str());
    ui->predict2->setText(predictions[1].c_str());
    ui->predict3->setText(predictions[2].c_str());
    //(testing) uncommented from here
    ui->predict4->setText(predictions[3].c_str());
    ui->predict5->setText(predictions[4].c_str());
    ui->predict6->setText(predictions[5].c_str());


    ui->predict7->setText(predictions[6].c_str());
    ui->predict8->setText(predictions[7].c_str());
    ui->predict9->setText(predictions[8].c_str());
    ui->predict10->setText(predictions[9].c_str());
    ui->predict11->setText(predictions[10].c_str());
    ui->predict13->setText(predictions[11].c_str());
    ui->predict14->setText(predictions[12].c_str());
    ui->predict15->setText(predictions[13].c_str());
    ui->predict16->setText(predictions[14].c_str());

    ui->predict19->setText(predictions[15].c_str());
    ui->predict20->setText(predictions[16].c_str());
    ui->predict21->setText(predictions[17].c_str());

    ui->predict25->setText(predictions[18].c_str());
    ui->predict26->setText(predictions[19].c_str());

    MainWindow::update();

    //(testing) use these if this doesn't work
    /*
    ui->predict7->setText(predictions[3].c_str());
    ui->predict8->setText(predictions[4].c_str());
    ui->predict9->setText(predictions[5].c_str());

    ui->predict13->setText(predictions[6].c_str());
    ui->predict14->setText(predictions[7].c_str());
    ui->predict15->setText(predictions[8].c_str());

    ui->predict19->setText(predictions[9].c_str());
    ui->predict20->setText(predictions[10].c_str());
    ui->predict21->setText(predictions[11].c_str());

    ui->predict25->setText(predictions[12].c_str());
    ui->predict26->setText(predictions[13].c_str());
    ui->predict27->setText(predictions[14].c_str());
    */
    predictions.clear();
}



void MainWindow::clearTxt()
{
    ui->textIn->clear ();
}



MainWindow::~MainWindow()
{
    delete ui;
}
