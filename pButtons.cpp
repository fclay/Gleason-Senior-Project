
#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::connectPButtons()
{
    QObject::connect (ui->predict1, SIGNAL(clicked()), this, SLOT(p1_pressed()));
    QObject::connect (ui->predict2, SIGNAL(clicked()), this, SLOT(p2_pressed()));
    QObject::connect (ui->predict3, SIGNAL(clicked()), this, SLOT(p3_pressed()));
    QObject::connect (ui->predict4, SIGNAL(clicked()), this, SLOT(p4_pressed()));
    QObject::connect (ui->predict5, SIGNAL(clicked()), this, SLOT(p5_pressed()));
    QObject::connect (ui->predict6, SIGNAL(clicked()), this, SLOT(p6_pressed()));
    QObject::connect (ui->predict7, SIGNAL(clicked()), this, SLOT(p7_pressed()));
    QObject::connect (ui->predict8, SIGNAL(clicked()), this, SLOT(p8_pressed()));
    QObject::connect (ui->predict9, SIGNAL(clicked()), this, SLOT(p9_pressed()));
    QObject::connect (ui->predict10, SIGNAL(clicked()), this, SLOT(p10_pressed()));
    QObject::connect (ui->predict11, SIGNAL(clicked()), this, SLOT(p11_pressed()));
    QObject::connect (ui->predict12, SIGNAL(clicked()), this, SLOT(p12_pressed()));
    QObject::connect (ui->predict13, SIGNAL(clicked()), this, SLOT(p13_pressed()));
    QObject::connect (ui->predict14, SIGNAL(clicked()), this, SLOT(p14_pressed()));
    QObject::connect (ui->predict15, SIGNAL(clicked()), this, SLOT(p15_pressed()));
    QObject::connect (ui->predict16, SIGNAL(clicked()), this, SLOT(p16_pressed()));
    QObject::connect (ui->predict17, SIGNAL(clicked()), this, SLOT(p17_pressed()));
    QObject::connect (ui->predict18, SIGNAL(clicked()), this, SLOT(p18_pressed()));
    QObject::connect (ui->predict19, SIGNAL(clicked()), this, SLOT(p19_pressed()));
    QObject::connect (ui->predict20, SIGNAL(clicked()), this, SLOT(p20_pressed()));
    QObject::connect (ui->predict21, SIGNAL(clicked()), this, SLOT(p21_pressed()));
    QObject::connect (ui->predict22, SIGNAL(clicked()), this, SLOT(p22_pressed()));
    QObject::connect (ui->predict23, SIGNAL(clicked()), this, SLOT(p23_pressed()));
    QObject::connect (ui->predict24, SIGNAL(clicked()), this, SLOT(p24_pressed()));
    QObject::connect (ui->predict25, SIGNAL(clicked()), this, SLOT(p25_pressed()));
    QObject::connect (ui->predict26, SIGNAL(clicked()), this, SLOT(p26_pressed()));
    QObject::connect (ui->predict27, SIGNAL(clicked()), this, SLOT(p27_pressed()));
    QObject::connect (ui->predict28, SIGNAL(clicked()), this, SLOT(p28_pressed()));
    QObject::connect (ui->predict29, SIGNAL(clicked()), this, SLOT(p29_pressed()));
    QObject::connect (ui->predict30, SIGNAL(clicked()), this, SLOT(p30_pressed()));

}

void MainWindow::p1_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict1->text();

    if(upper == true || shift == true)
        output[0] = ui->predict1->text()[0].toUpper();

    newText.append(output);
    ui->textIn->setText(newText);
}

void MainWindow::p2_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict2->text();

    if(upper == true || shift == true)
        output[0] = ui->predict2->text()[0].toUpper();

    newText.append(output);
    ui->textIn->setText(newText);
}

void MainWindow::p3_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict3->text();

    if(upper == true || shift == true)
        output[0] = ui->predict3->text()[0].toUpper();

    newText.append(output);
    ui->textIn->setText(newText);
}

void MainWindow::p4_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict4->text();

    if(upper == true || shift == true)
        output[0] = ui->predict4->text()[0].toUpper();

    newText.append(output);
    ui->textIn->setText(newText);
}

void MainWindow::p5_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict5->text();

    if(upper == true || shift == true)
        output[0] = ui->predict5->text()[0].toUpper();

    newText.append(output);
    ui->textIn->setText(newText);

}

void MainWindow::p6_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict6->text();

    if(upper == true || shift == true)
        output[0] = ui->predict6->text()[0].toUpper();

    newText.append(output);
    ui->textIn->setText(newText);
}

void MainWindow::p7_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict1->text();

    if(upper == true || shift == true)
        output[0] = ui->predict1->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict7->text());
    ui->textIn->setText(newText);

}

void MainWindow::p8_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict2->text();

    if(upper == true || shift == true)
        output[0] = ui->predict2->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict8->text());
    ui->textIn->setText(newText);
}

void MainWindow::p9_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict3->text();

    if(upper == true || shift == true)
        output[0] = ui->predict3->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict9->text());
    ui->textIn->setText(newText);
}

void MainWindow::p10_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict4->text();

    if(upper == true || shift == true)
        output[0] = ui->predict4->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict10->text());
    ui->textIn->setText(newText);
}

void MainWindow::p11_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict5->text();

    if(upper == true || shift == true)
        output[0] = ui->predict5->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict11->text());
    ui->textIn->setText(newText);
}

void MainWindow::p12_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict6->text();

    if(upper == true || shift == true)
        output[0] = ui->predict6->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict12->text());
    ui->textIn->setText(newText);
}

void MainWindow::p13_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict1->text();

    if(upper == true || shift == true)
        output[0] = ui->predict1->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict7->text());
    newText.append(ui->predict13->text());
    ui->textIn->setText(newText);
}

void MainWindow::p14_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict2->text();

    if(upper == true || shift == true)
        output[0] = ui->predict2->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict8->text());
    newText.append(ui->predict14->text());
    ui->textIn->setText(newText);
}

void MainWindow::p15_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict3->text();

    if(upper == true || shift == true)
        output[0] = ui->predict3->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict9->text());
    newText.append(ui->predict15->text());
    ui->textIn->setText(newText);
}

void MainWindow::p16_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict4->text();

    if(upper == true || shift == true)
        output[0] = ui->predict4->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict10->text());
    newText.append(ui->predict16->text());
    ui->textIn->setText(newText);
}

void MainWindow::p17_pressed()
{

}

void MainWindow::p18_pressed()
{

}

void MainWindow::p19_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict1->text();

    if(upper == true || shift == true)
        output[0] = ui->predict1->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict7->text());
    newText.append(ui->predict13->text());
    newText.append(ui->predict19->text());
    ui->textIn->setText(newText);
}

void MainWindow::p20_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict2->text();

    if(upper == true || shift == true)
        output[0] = ui->predict2->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict8->text());
    newText.append(ui->predict14->text());
    newText.append(ui->predict20->text());
    ui->textIn->setText(newText);
}

void MainWindow::p21_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict3->text();

    if(upper == true || shift == true)
        output[0] = ui->predict3->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict9->text());
    newText.append(ui->predict15->text());
    newText.append(ui->predict21->text());
    ui->textIn->setText(newText);
}

void MainWindow::p22_pressed()
{

}

void MainWindow::p23_pressed()
{

}

void MainWindow::p24_pressed()
{

}

void MainWindow::p25_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict1->text();

    if(upper == true || shift == true)
        output[0] = ui->predict1->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict7->text());
    newText.append(ui->predict13->text());
    newText.append(ui->predict19->text());
    newText.append(ui->predict25->text());
    ui->textIn->setText(newText);
}

void MainWindow::p26_pressed()
{
    bool upper = false;
    bool shift = false;
    QString output;
    QString newText = ui->textIn->text();
    std::cout << newText.toStdString() << std::endl;
    if(newText[0].isUpper()) {
        upper = true;
    }
    int x = (newText.length()-1);
    if ( x>=0 )
    {
        if (newText.at(x) != ' ')
        {
            while((newText.size() > 0) && (newText.at(x) != ' '))
            {
                if(newText[x].isUpper() == true) //user caps
                    shift = true;

                newText.chop(1);
                x--;
            }
        }
    }
    if (newText.size() != 0)
        upper = false;

    output = ui->predict2->text();

    if(upper == true || shift == true)
        output[0] = ui->predict2->text()[0].toUpper();

    newText.append(output);
    newText.append(ui->predict8->text());
    newText.append(ui->predict14->text());
    newText.append(ui->predict20->text());
    newText.append(ui->predict26->text());
    ui->textIn->setText(newText);
}

void MainWindow::p27_pressed()
{

}

void MainWindow::p28_pressed()
{

}

void MainWindow::p29_pressed()
{

}

void MainWindow::p30_pressed()
{

}

