#include "Plantacao.h"

Plantacao::Plantacao(QObject *parent)
{

}

QString Plantacao::nome() const
{
    return m_nome;
}

void Plantacao::setNome(const QString &nome)
{
    m_nome = nome;
}

int Plantacao::quantidade() const
{
    return m_quantidade;
}

void Plantacao::setQuantidade(int quantidade)
{
    m_quantidade = quantidade;
}

int Plantacao::nivelAtencao() const
{
    return m_nivelAtencao;
}

void Plantacao::setNivelAtencao(int nivelAtencao)
{
    m_nivelAtencao = nivelAtencao;
}
