#include "Dono.h"

Dono::Dono( QString nome, QString cidade, QString pais, int nivelConhecimento, QObject *parent)
    : m_nome(nome)
    , m_cidade(cidade)
    , m_pais(pais)
    , m_nivelConhecimento(nivelConhecimento)
{

}

QString Dono::nome() const
{
    return m_nome;
}

void Dono::setNome(const QString &nome)
{
    m_nome = nome;
}

QString Dono::cidade() const
{
    return m_cidade;
}

void Dono::setCidade(const QString &cidade)
{
    m_cidade = cidade;
}

QString Dono::pais() const
{
    return m_pais;
}

void Dono::setPais(const QString &pais)
{
    m_pais = pais;
}

int Dono::nivelConhecimento() const
{
    return m_nivelConhecimento;
}

void Dono::setNivelConhecimento(int nivelConhecimento)
{
    m_nivelConhecimento = nivelConhecimento;
}
