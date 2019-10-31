#ifndef NOVAHORTA_H
#define NOVAHORTA_H

#include "Horta.h"
#include <QDialog>

namespace Ui {
class NovaHorta;
}

class NovaHorta : public QDialog
{
    Q_OBJECT

public:
    explicit NovaHorta(QWidget *parent = nullptr);
    ~NovaHorta();

private:
    Ui::NovaHorta *ui;

signals:
    void novaHorta( Horta horta );
};

#endif // NOVAHORTA_H
