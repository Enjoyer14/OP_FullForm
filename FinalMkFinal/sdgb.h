#ifndef SDGB_H
#define SDGB_H

#include <QDialog>

namespace Ui {
class sdgb;
}

class sdgb : public QDialog
{
    Q_OBJECT

public:
    explicit sdgb(QWidget *parent = nullptr);
    ~sdgb();

private:
    Ui::sdgb *ui;
};

#endif // SDGB_H
