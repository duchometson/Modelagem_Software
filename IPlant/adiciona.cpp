#include "adiciona.h"
#include "ui_adiciona.h"

#include <QDebug>

Adiciona::Adiciona( QSharedPointer<Horta> horta, QWidget *parent ) :
    QDialog(parent),
    m_horta(horta) ,
    ui(new Ui::Adiciona)
{
    ui->setupUi(this);
    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
}

Adiciona::~Adiciona()
{
    delete ui;
}

void Adiciona::on_buttonBox_accepted()
{
    QDateTime dt = ui->dateEdit->dateTime();
    Plantacao plant( ui->plantacaoLineEdit->text(), ui->quantidadeComboBox->value(),
                     ui->atentionNivel->value(), ui->dateEdit->dateTime());
    m_horta->addPlantacao(plant);
}
