#ifndef ADICIONA_H
#define ADICIONA_H

#include <QDialog>
#include "Horta.h"

namespace Ui {
class Adiciona;
}

class Adiciona : public QDialog
{
    Q_OBJECT

public:
    explicit Adiciona(QSharedPointer<Horta> horta, QWidget *parent = nullptr);
    ~Adiciona();

private:
    QSharedPointer<Horta> m_horta;
    Ui::Adiciona *ui;
};

#endif // ADICIONA_H
