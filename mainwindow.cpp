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
    second =0;
    connect(&timer ,SIGNAL(timeout()),this,SLOT(time()));
    timer.start(1000);
}


void MainWindow::on_nextbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_recordbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_startbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_backbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::time()
{
    second=second+1;
    if (second==30){
        second=0;
        ui->stackedWidget->setCurrentIndex(3);
    }
    else{
        ui->lcdNumber->display(second);
    }
}

