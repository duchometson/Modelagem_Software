#include "Plantacao.h"
#include <QMap>

Plantacao::Plantacao(QString nome, int quantidade, int nivelAntencao, QDateTime dataPlantio, QObject *parent) :
    m_nome(nome)
  , m_quantidade(quantidade)
  , m_nivelAtencao(nivelAntencao)
  , m_dataPlantio(dataPlantio)
{

}

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

QDateTime Plantacao::ultimaRegada() const
{
    return m_ultimaRegada;
}

void Plantacao::atualizaRegada()
{
    m_ultimaRegada = QDateTime::currentDateTime();
}

QMap<QString, QString> Plantacao::mappedData() const {
    QMap<QString, QString> ret;
    ret.insert( "plantacao." + m_nome + ".nome", m_nome );
    ret.insert( "plantacao." + m_nome + ".quantidade", QString("%1").arg(m_quantidade) );
    ret.insert( "plantacao." + m_nome + ".atencao", QString("%1").arg(m_nivelAtencao) );
    ret.insert( "plantacao." + m_nome + ".regado", QString("%1").arg(m_ultimaRegada.toSecsSinceEpoch()));
    return ret;
}
