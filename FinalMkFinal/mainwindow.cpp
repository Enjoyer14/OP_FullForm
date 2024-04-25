#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"
#include "printwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Add_clicked()
{
    AddWindow window;
    window.hdata = this->refDataH;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_btn_print_clicked()
{
    PrintWindow window;
    window.hdata = this->refDataH;
    window.printTable();
    window.setModal(true);
    window.exec();
}

