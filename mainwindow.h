#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pvpbtn_clicked();

    void on_survivalbtn_clicked();

    void on_subnamebtn_clicked();

    void on_pvpstartbtn_clicked();

    void on_nextbtn_clicked();

    void on_recordbtn_clicked();

    void on_startbtn_clicked();

    void on_backbtn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
