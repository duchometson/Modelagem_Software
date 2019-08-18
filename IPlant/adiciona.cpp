#include "adiciona.h"
#include "ui_adiciona.h"

Adiciona::Adiciona(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adiciona)
{
    ui->setupUi(this);
}

Adiciona::~Adiciona()
{
    delete ui;
}
