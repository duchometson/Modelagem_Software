#include "Horta.h"

Horta::Horta( Dono dono,  Plantacao plantacao, QObject *parent) : QObject(parent)
  , m_dono(dono)
  , m_plantacao(plantacao)
{
}

Dono Horta::dono() const
{
    return m_dono;
}

void Horta::setDono(const Dono &dono)
{
    m_dono = dono;
}

Plantacao Horta::plantacao() const
{
    return m_plantacao;
}

void Horta::setPlantacao(const Plantacao &plantacao)
{
    m_plantacao = plantacao;
}
