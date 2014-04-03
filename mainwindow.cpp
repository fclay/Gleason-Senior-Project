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

    //reset Presage context
    myMiddle->context->clear ();
    myMiddle->context->append(theStr);

    //Get predictions
    std::vector< std::string > predictions = myMiddle->predictEngine->predict();
    std::vector< std::string > tempVector;
    //first column
    if(predictions.empty())
        return;

    MainWindow::update();
    predictions.resize(30);

    for(int i = 0; i < 12; i++)
    {
        myMiddle->context->clear();
        predictions[i].append(" ");
        myMiddle->context->append(predictions[i]);
        tempVector = myMiddle->predictEngine->predict();
        predictions[i+6] = tempVector[0];
    }

    for(int i = 1; i < 15; i++)
    {
        if (predictions[i].empty())
            return;
    }
    ui->predict1->setText(predictions[0].c_str());
    ui->predict2->setText(predictions[1].c_str());
    ui->predict3->setText(predictions[2].c_str());
    //ui->predict4->setText(predictions[3].c_str());
    //ui->predict5->setText(predictions[4].c_str());
    //ui->predict6->setText(predictions[5].c_str());

/*
    ui->predict7->setText(predictions[6].c_str());
    ui->predict8->setText(predictions[7].c_str());
    ui->predict9->setText(predictions[8].c_str());
    ui->predict10->setText(predictions[9].c_str());
    ui->predict11->setText(predictions[10].c_str());
    ui->predict12->setText(predictions[11].c_str());
 //   MainWindow::update();
    ui->predict13->setText(predictions[12].c_str());
    ui->predict14->setText(predictions[13].c_str());
    ui->predict15->setText(predictions[14].c_str());
    ui->predict16->setText(predictions[15].c_str());
    ui->predict17->setText(predictions[16].c_str());
    ui->predict18->setText(predictions[17].c_str());
 //   MainWindow::update();
    ui->predict19->setText(predictions[18].c_str());
    ui->predict20->setText(predictions[19].c_str());
    ui->predict21->setText(predictions[20].c_str());
    ui->predict22->setText(predictions[21].c_str());
    ui->predict23->setText(predictions[22].c_str());
    ui->predict24->setText(predictions[23].c_str());
 //   MainWindow::update();
    ui->predict25->setText(predictions[24].c_str());
    ui->predict26->setText(predictions[25].c_str());
    ui->predict27->setText(predictions[26].c_str());
    ui->predict28->setText(predictions[27].c_str());
    ui->predict29->setText(predictions[28].c_str());
    ui->predict30->setText(predictions[29].c_str());
   // MainWindow::update();
*/
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
