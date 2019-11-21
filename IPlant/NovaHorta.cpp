#include "NovaHorta.h"
#include "ui_NovaHorta.h"

NovaHorta::NovaHorta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NovaHorta)
{
    QList<QString> list;
    list.append("Rio de Janeiro");
    list.append("Manaus");
    list.append("Florianópólis");
    list.append("Natal");
    ui->setupUi(this);
    ui->cidadeComboBox->addItems(list);
}

NovaHorta::~NovaHorta()
{
    delete ui;
}

void NovaHorta::on_buttonBox_accepted()
{
    Dono dono( ui->donoNomeLineEdit->text(), ui->cidadeComboBox->currentText(), ui->paisLineEdit->text() );
    Horta *horta = new Horta( ui->nomeHortaLineEdit->text(), dono );
    emit novaHorta(horta);
}
