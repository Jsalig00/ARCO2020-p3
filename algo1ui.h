#ifndef ALGO1UI_H
#define ALGO1UI_H

#include <QMainWindow>

#include <ctime>
#include <math.h>

namespace Ui {
class algo1ui;
}

class algo1ui : public QMainWindow
{
    Q_OBJECT

public:
    explicit algo1ui(QWidget *parent = nullptr);
    ~algo1ui();

private:
    Ui::algo1ui *ui;
};

#endif // ALGO1UI_H