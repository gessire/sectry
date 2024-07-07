#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>

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

void MainWindow::on_pvpbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_survivalbtn_clicked()
{
   ui->stackedWidget->setCurrentIndex(4);
}



void MainWindow::on_subnamebtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void MainWindow::on_pvpstartbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_nextbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

