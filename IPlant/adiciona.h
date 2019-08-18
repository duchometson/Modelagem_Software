#ifndef ADICIONA_H
#define ADICIONA_H

#include <QDialog>

namespace Ui {
class Adiciona;
}

class Adiciona : public QDialog
{
    Q_OBJECT

public:
    explicit Adiciona(QWidget *parent = nullptr);
    ~Adiciona();

private:
    Ui::Adiciona *ui;
};

#endif // ADICIONA_H
