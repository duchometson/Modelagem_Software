#include "Recomendacao.h"

Recomendacao::Recomendacao( QString plantacao, QString estacao, QString clima, QString umidade, QString temperatura, QString luminosidade ) :
    m_plantacao(plantacao)
  , m_estacao(estacao)
  , m_clima(clima)
  , m_umidade(umidade)
  , m_temperatura(temperatura)
  , m_luminosidade(luminosidade)
{

}

QString Recomendacao::estacao() const
{
    return m_estacao;
}

void Recomendacao::setEstacao(const QString &estacao)
{
    m_estacao = estacao;
}

QString Recomendacao::clima() const
{
    return m_clima;
}

void Recomendacao::setClima(const QString &clima)
{
    m_clima = clima;
}

QString Recomendacao::umidade() const
{
    return m_umidade;
}

void Recomendacao::setUmidade(const QString &umidade)
{
    m_umidade = umidade;
}

QString Recomendacao::temperatura() const
{
    return m_temperatura;
}

void Recomendacao::setTemperatura(const QString &temperatura)
{
    m_temperatura = temperatura;
}

QString Recomendacao::luminosidade() const
{
    return m_luminosidade;
}

void Recomendacao::setLuminosidade(const QString &luminosidade)
{
    m_luminosidade = luminosidade;
}

QString Recomendacao::plantacao() const
{
    return m_plantacao;
}

void Recomendacao::setPlantacao(const QString &plantacao)
{
    m_plantacao = plantacao;
}
