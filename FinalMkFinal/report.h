#pragma once
#ifndef REPORT_H
#define REPORT_H

#include <QDialog>
#include "Hotel.h"
#include "hdata.h"
#include <QApplication>
#include <QFormLayout>
#include <QDateEdit>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class Report;
}

class Report : public QDialog
{
    Q_OBJECT

public:
    explicit Report(QWidget *parent = nullptr);
    ~Report();

    QDateEdit *dateEdit = new QDateEdit(this);
    HData *hdata;
    int index;

private:
    Ui::Report *ui;

private slots:
    void onYesClicked();

    void onNoClicked();
};

#endif // REPORT_H
