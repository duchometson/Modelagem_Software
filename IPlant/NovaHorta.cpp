#include "NovaHorta.h"
#include "ui_NovaHorta.h"

NovaHorta::NovaHorta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NovaHorta)
{
    ui->setupUi(this);
}

NovaHorta::~NovaHorta()
{
    delete ui;
}

void NovaHorta::on_buttonBox_accepted()
{
    Dono dono( ui->donoNomeLineEdit->text(), ui->cidadeLineEdit->text(), ui->paisLineEdit->text(), ui->nivelConhecimento->value() );
    Horta horta( ui->nomeHortaLineEdit->text(), dono );
    emit novaHorta(horta);
}
