#include "adiciona.h"
#include "ui_adiciona.h"

Adiciona::Adiciona( QSharedPointer<Horta> horta, QWidget *parent ) :
    QDialog(parent),
    m_horta(horta) ,
    ui(new Ui::Adiciona)
{
    ui->setupUi(this);
}

Adiciona::~Adiciona()
{
    delete ui;
}
