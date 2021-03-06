
#include </usr/include/python2.7/Python.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::connectKeyboard(){

    QObject::connect (ui->Shift_Btn, SIGNAL(clicked()), this, SLOT(shift_pressed()));
    QObject::connect (ui->Alt1_Btn, SIGNAL(clicked()), this, SLOT(alt1_pressed()));
    QObject::connect (ui->Back_Btn, SIGNAL(clicked()), this, SLOT(back_space()));
    QObject::connect (ui->A_Btn, SIGNAL(clicked()), this, SLOT(aBtn_pressed()));
    QObject::connect (ui->B_Btn, SIGNAL(clicked()), this, SLOT(bBtn_pressed()));
    QObject::connect (ui->C_Btn, SIGNAL(clicked()), this, SLOT(cBtn_pressed()));
    QObject::connect (ui->D_Btn, SIGNAL(clicked()), this, SLOT(dBtn_pressed()));
    QObject::connect (ui->E_Btn, SIGNAL(clicked()), this, SLOT(eBtn_pressed()));
    QObject::connect (ui->F_Btn, SIGNAL(clicked()), this, SLOT(fBtn_pressed()));
    QObject::connect (ui->G_Btn, SIGNAL(clicked()), this, SLOT(gBtn_pressed()));
    QObject::connect (ui->H_Btn, SIGNAL(clicked()), this, SLOT(hBtn_pressed()));
    QObject::connect (ui->I_Btn, SIGNAL(clicked()), this, SLOT(iBtn_pressed()));
    QObject::connect (ui->J_Btn, SIGNAL(clicked()), this, SLOT(jBtn_pressed()));
    QObject::connect (ui->K_Btn, SIGNAL(clicked()), this, SLOT(kBtn_pressed()));
    QObject::connect (ui->L_Btn, SIGNAL(clicked()), this, SLOT(lBtn_pressed()));
    QObject::connect (ui->M_Btn, SIGNAL(clicked()), this, SLOT(mBtn_pressed()));
    QObject::connect (ui->N_Btn, SIGNAL(clicked()), this, SLOT(nBtn_pressed()));
    QObject::connect (ui->O_Btn, SIGNAL(clicked()), this, SLOT(oBtn_pressed()));
    QObject::connect (ui->P_Btn, SIGNAL(clicked()), this, SLOT(pBtn_pressed()));
    QObject::connect (ui->Q_Btn, SIGNAL(clicked()), this, SLOT(qBtn_pressed()));
    QObject::connect (ui->R_Btn, SIGNAL(clicked()), this, SLOT(rBtn_pressed()));
    QObject::connect (ui->S_Btn, SIGNAL(clicked()), this, SLOT(sBtn_pressed()));
    QObject::connect (ui->T_Btn, SIGNAL(clicked()), this, SLOT(tBtn_pressed()));
    QObject::connect (ui->U_Btn, SIGNAL(clicked()), this, SLOT(uBtn_pressed()));
    QObject::connect (ui->V_Btn, SIGNAL(clicked()), this, SLOT(vBtn_pressed()));
    QObject::connect (ui->W_Btn, SIGNAL(clicked()), this, SLOT(wBtn_pressed()));
    QObject::connect (ui->X_Btn, SIGNAL(clicked()), this, SLOT(xBtn_pressed()));
    QObject::connect (ui->Y_Btn, SIGNAL(clicked()), this, SLOT(yBtn_pressed()));
    QObject::connect (ui->Z_Btn, SIGNAL(clicked()), this, SLOT(zBtn_pressed()));
    QObject::connect (ui->Space_Btn, SIGNAL(clicked()), this, SLOT(space_pressed()));
    QObject::connect (ui->Period_Btn, SIGNAL(clicked()), this, SLOT(period_pressed()));
    QObject::connect (ui->Comma_Btn, SIGNAL(clicked()), this, SLOT(comma_pressed()));
    QObject::connect (ui->Enter_Btn, SIGNAL(clicked()), this, SLOT(enter_pressed()));
    QObject::connect(ui->start_Button, SIGNAL(clicked()), this, SLOT(start_Button_Pressed()));
    QObject::connect(ui->A_Btn, SIGNAL(hovered()), this, SLOT(aBtn_pressed()));
    QObject::connect(ui->say_btn, SIGNAL(clicked()), this, SLOT(say_pressed()));
    QObject::connect(ui->mouse_button, SIGNAL(clicked()), this, SLOT(mouse_pressed()));
    QObject::connect(ui->sendButton, SIGNAL(clicked()), this, SLOT(send_pressed()));
    QObject::connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(delete_pressed()));
    QObject::connect(ui->deleteWord, SIGNAL(clicked()), this, SLOT(delete_word()));
}


void MainWindow::shift_pressed ()
{
    if (ui->Shift_Btn->text() == "Shift")
    {
        ui->Shift_Btn->setText("SHIFT");
    }
    else if(ui->Shift_Btn->text() == "SHIFT")
    {
        ui->Shift_Btn->setText("CAPS LOCK");
    }
    else if(ui->Shift_Btn->text() == "CAPS LOCK")
    {
        ui->Shift_Btn->setText("Shift");
    }
    else
    {
        ui->Shift_Btn->setText("Shift");
    }

}
void MainWindow::alt1_pressed()
{
    ui->Shift_Btn->setText("Shift");

    if (ui->Alt1_Btn->text() == "ABC")
    {
        ui->A_Btn->setText ("A");
        ui->B_Btn->setText ("B");
        ui->C_Btn->setText ("C");
        ui->D_Btn->setText ("D");
        ui->E_Btn->setText ("E");
        ui->F_Btn->setText ("F");
        ui->G_Btn->setText ("G");
        ui->H_Btn->setText ("H");
        ui->I_Btn->setText ("I");
        ui->J_Btn->setText ("J");
        ui->K_Btn->setText ("K");
        ui->L_Btn->setText ("L");
        ui->M_Btn->setText ("M");
        ui->N_Btn->setText ("N");
        ui->O_Btn->setText ("O");
        ui->P_Btn->setText ("P");
        ui->Q_Btn->setText ("Q");
        ui->R_Btn->setText ("R");
        ui->S_Btn->setText ("S");
        ui->T_Btn->setText ("T");
        ui->U_Btn->setText ("U");
        ui->V_Btn->setText ("V");
        ui->W_Btn->setText ("W");
        ui->X_Btn->setText ("X");
        ui->Y_Btn->setText ("Y");
        ui->Z_Btn->setText ("Z");
        ui->Comma_Btn->setText(",");

        ui->Alt1_Btn->setText("!@?#");
    }
    else if (ui->Alt1_Btn->text() == "!@?#")
    {
        ui->A_Btn->setText ("!");
        ui->B_Btn->setText ("+");
        ui->C_Btn->setText ("/");
        ui->D_Btn->setText ("#");
        ui->E_Btn->setText ("3");
        ui->F_Btn->setText ("$");
        ui->G_Btn->setText ("%");
        ui->H_Btn->setText ("^");
        ui->I_Btn->setText ("8");
        ui->J_Btn->setText ("*");
        ui->K_Btn->setText ("(");
        ui->L_Btn->setText (")");
        ui->M_Btn->setText (">");
        ui->N_Btn->setText ("<");
        ui->O_Btn->setText ("9");
        ui->P_Btn->setText ("0");
        ui->Q_Btn->setText ("1");
        ui->R_Btn->setText ("4");
        ui->S_Btn->setText ("@");
        ui->T_Btn->setText ("5");
        ui->U_Btn->setText ("7");
        ui->V_Btn->setText ("-");
        ui->W_Btn->setText ("2");
        ui->X_Btn->setText ("}");
        ui->Y_Btn->setText ("6");
        ui->Z_Btn->setText ("{");
        ui->Comma_Btn->setText("?");

        ui->Alt1_Btn->setText("ABC");
    }
}

void MainWindow::back_space()
{
    QString myStr = ui->textIn->text ();
    myStr.chop(1);
    ui->textIn->setText (myStr);
}

void MainWindow::aBtn_pressed (){
    QString myStr = ui->textIn->text ();
    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("A");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("A");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.chop(1);
        myStr.append("! ");}
    else{
        myStr.append ("a");}
    ui->textIn->setText (myStr);
}
void MainWindow::bBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("B");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("B");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("+");}
    else{
        myStr.append ("b");}

    ui->textIn->setText (myStr);
}
void MainWindow::cBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("C");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("C");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("/");}
    else{
        myStr.append ("c");}

    ui->textIn->setText (myStr);
}
void MainWindow::dBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("D");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("D");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("#");}
    else{
        myStr.append ("d");}

    ui->textIn->setText (myStr);
}
void MainWindow::eBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("E");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("E");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("3");}
    else{
        myStr.append ("e");}

    ui->textIn->setText (myStr);
}
void MainWindow::fBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("F");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("F");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("$");}
    else{
        myStr.append ("f");}

    ui->textIn->setText (myStr);
}
void MainWindow::gBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("G");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("G");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("%");}
    else{
        myStr.append ("g");}

    ui->textIn->setText (myStr);
}
void MainWindow::hBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("H");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("H");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("&");}
    else{
        myStr.append ("h");}

    ui->textIn->setText (myStr);
}
void MainWindow::iBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("I");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("I");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("8");}
    else{
        myStr.append ("i");}

    ui->textIn->setText (myStr);
}
void MainWindow::jBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("J");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("J");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("*");}
    else{
        myStr.append ("j");}

    ui->textIn->setText (myStr);
}
void MainWindow::kBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("K");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("K");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("(");}
    else{
        myStr.append ("k");}

    ui->textIn->setText (myStr);
}
void MainWindow::lBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("L");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("L");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append(")");}
    else{
        myStr.append ("l");}

    ui->textIn->setText (myStr);
}
void MainWindow::mBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("M");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("M");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append(">");}
    else{
        myStr.append ("m");}

    ui->textIn->setText (myStr);
}
void MainWindow::nBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("N");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("N");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("<");}
    else{
        myStr.append ("n");}

    ui->textIn->setText (myStr);
}
void MainWindow::oBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("O");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("O");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("9");}
    else{
        myStr.append ("o");}

    ui->textIn->setText (myStr);
}
void MainWindow::pBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("P");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("P");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("0");}
    else{
        myStr.append ("p");}

    ui->textIn->setText (myStr);
}
void MainWindow::qBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("Q");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("Q");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("1");}
    else{
        myStr.append ("q");}

    ui->textIn->setText (myStr);
}
void MainWindow::rBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("R");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("R");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("4");}
    else{
        myStr.append ("r");}

    ui->textIn->setText (myStr);
}
void MainWindow::sBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("S");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("S");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("@");}
    else{
        myStr.append ("s");}

    ui->textIn->setText (myStr);
}
void MainWindow::tBtn_pressed (){
    QString myStr = ui->textIn->text ();
    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("T");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("T");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("5");}
    else{
        myStr.append ("t");}
    ui->textIn->setText (myStr);
}
void MainWindow::uBtn_pressed (){
    QString myStr = ui->textIn->text ();
    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("U");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("U");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("7");}
    else{
        myStr.append ("u");}
    ui->textIn->setText (myStr);
}
void MainWindow::vBtn_pressed (){
    QString myStr = ui->textIn->text ();
    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("V");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("V");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("-");}
    else{
        myStr.append ("v");}
    ui->textIn->setText (myStr);
}
void MainWindow::wBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("W");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("W");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("2");}
    else{
        myStr.append ("w");}

    ui->textIn->setText (myStr);
}
void MainWindow::xBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("X");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("X");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("}");}
    else{
        myStr.append ("x");}
    ui->textIn->setText (myStr);
}
void MainWindow::yBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("Y");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("Y");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("6");}
    else{
        myStr.append ("y");}

    ui->textIn->setText (myStr);
}
void MainWindow::zBtn_pressed (){
    QString myStr = ui->textIn->text ();

    if (ui->Shift_Btn->text() == "SHIFT" || MainWindow::checkPunctuation() == true){
        myStr.append ("Z");
        ui->Shift_Btn->setText("Shift");}
    else if(ui->Shift_Btn->text() == "CAPS LOCK"){
        myStr.append("Z");}
    else if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("{");}
    else{
        myStr.append ("z");}
    ui->textIn->setText (myStr);
}
void MainWindow::space_pressed (){
    QString myStr = ui->textIn->text ();
    myStr.append (" ");
    if(myStr[myStr.length()-2] == 'i')
        myStr[myStr.length()-2] = myStr[myStr.length()-2].toUpper();

    ui->textIn->setText (myStr);
}
void MainWindow::period_pressed (){
    QString myStr = ui->textIn->text ();
    if(myStr[myStr.size()-1] == ' ') {
        myStr.chop(1);
    }
    myStr.append (". ");
    ui->textIn->setText (myStr);
}
void MainWindow::comma_pressed (){
    QString myStr = ui->textIn->text ();
    if(myStr[myStr.size()-1] == ' ') {
        myStr.chop(1);
    }
    if(ui->Alt1_Btn->text() == "ABC"){
        myStr.append("? ");}
    else{
        myStr.append (", ");}
    ui->textIn->setText (myStr);
}

void MainWindow::enter_pressed() {
    MainWindow::send_pressed();
    MainWindow::showMinimized();
    system("xdotool key KP_Enter");
    MainWindow::showNormal();
}

void MainWindow::start_Button_Pressed() {
    QProcess *myProcess = new QProcess();
    myProcess->startDetached("/home/forestclay/Documents/pupilRevisions/pupil-0.3.9/run_capture");
}


void MainWindow::say_pressed() {
    QProcess *myProc = new QProcess();
    std::string sayStr = "espeak -v us-mbrola-2 -s 110 ";
    sayStr.append("\"");
    sayStr.append(ui->textIn->text().toStdString());
    sayStr.append("\"");
    myProc->startDetached(sayStr.c_str());

}

void MainWindow::mouse_pressed() {
    QProcess *myProc = new QProcess(this);
    myProc->startDetached("python /home/forestclay/Documents/pupilRevisions/pupil-0.3.9/pupil_src/capture/new_mouse_listener.py");

}

void MainWindow::send_pressed() {

    MainWindow::showMinimized();
    std::string outText = "xdotool type ";
    outText.append("\"");
    outText.append(ui->textIn->text().toStdString());
    outText.append("\"");
    std::system(outText.c_str());
    std::cout << outText << std::endl;
    MainWindow::showNormal();

}

void MainWindow::delete_pressed() {
    MainWindow::showMinimized();
    system("xdotool key BackSpace");
    MainWindow::showNormal();
}

bool MainWindow::checkPunctuation() {
    QString myStr = ui->textIn->text();
    if(myStr.isEmpty() || myStr.isNull()) //first letter
        return true;
    else if(myStr.size() == 1) //make sure str is long enough
        return false;
    if(myStr[myStr.size()-2] == '.' || myStr[myStr.size()-2] == '!' || myStr[myStr.size()-2] == '?') //new sentence
        return true;
    else
        return false;
}

void MainWindow::delete_word() {
    QString myStr = ui->textIn->text();
    int x = ui->textIn->text().length();
    int i = 0;
    if(myStr.isEmpty())
        return;

    do {
        i++;
        //myStr.chop(1);
        x--;
    } while(myStr[x-1] != ' ' && x > 0);
    std::cout << i << std::endl;
    myStr.chop(i);
    ui->textIn->setText(myStr);
}
