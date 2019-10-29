#include "Recomendacao.h"

Recomendacao::Recomendacao()
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
