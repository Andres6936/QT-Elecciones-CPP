#include "InterfaceElections.h"
#include "ui_MainWindow.h"

InterfaceElections::InterfaceElections(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

InterfaceElections::~InterfaceElections()
{
    delete ui;
}
