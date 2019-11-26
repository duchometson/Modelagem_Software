#include "Recomendacao.h"

Recomendacao::Recomendacao( QString plantacao, QString estacao, QString clima, int umidade, int temperatura, int luminosidade ) :
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

int Recomendacao::umidade() const
{
    return m_umidade;
}

void Recomendacao::setUmidade(int umidade)
{
    m_umidade = umidade;
}

int Recomendacao::temperatura() const
{
    return m_temperatura;
}

void Recomendacao::setTemperatura(int temperatura)
{
    m_temperatura = temperatura;
}

int Recomendacao::luminosidade() const
{
    return m_luminosidade;
}

void Recomendacao::setLuminosidade(int luminosidade)
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
