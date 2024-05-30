#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    newplot = new newplotclass;

    newplot->setparameter(600,400,1,1,3,3.5,2.5,"Vial H3");


ui->gridLayout->addWidget(newplot);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// ui->Result1->setText(QString::number(i));
void MainWindow::on_pushButton_clicked()
{


    i++;
    newplot->setData(ui->doubleSpinBox->value());



}
