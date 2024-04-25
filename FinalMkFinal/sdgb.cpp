#include "sdgb.h"
#include "ui_sdgb.h"

sdgb::sdgb(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sdgb)
{
    ui->setupUi(this);
}

sdgb::~sdgb()
{
    delete ui;
}
