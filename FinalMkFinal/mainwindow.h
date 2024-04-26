#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Hotel.h"
#include "hdata.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void ReadDataBase(HData &hdata);
    void WriteDataBase(HData &hdata);

    HData dataH;
    HData *refDataH = &dataH;

private slots:
    void on_btn_Add_clicked();

    void on_btn_print_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
