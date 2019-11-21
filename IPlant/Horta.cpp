#include "Horta.h"
#include <QDebug>

Horta::Horta( QString nome, Dono dono,  Plantacao plantacao, QObject *parent) : QObject(parent)
  , m_nome(nome)
  , m_dono(dono)
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

QList<Plantacao> Horta::plantacao() const
{
    return m_plantacao;
}

Plantacao Horta::plantacaoPorNome( QString nome ) const
{
    for( int i = 0; i < m_plantacao.size(); i++ ) {
        if( m_plantacao.at(i).nome() == nome ) {
            return m_plantacao[i];
        }
    }
}

void Horta::atualizaRegadaDePlantacao( QString plantacao ) {
    for( int i = 0; i < m_plantacao.size(); i++ ) {
        if( m_plantacao.at(i).nome() == plantacao ) {
            m_plantacao[i].atualizaRegada();
        }
    }
}

void Horta::setPlantacao(const QList<Plantacao> &plantacao)
{
    m_plantacao = plantacao;
}

void Horta::addPlantacao(Plantacao plantacao)
{
    qDebug() << "Adicionando " << plantacao.nome();
    m_plantacao.append(plantacao);
}

QString Horta::nome() const
{
    return m_nome;
}

void Horta::setNome(const QString &nome)
{
    m_nome = nome;
}

QList<QMap<QString, QString>> Horta::mappedData() {
    QList<QMap<QString, QString>> ret;
    QMap<QString, QString> hortaData;
    hortaData.insert( "Horta." + m_nome + ".nome", m_nome );
    hortaData.insert( "dono." + m_dono.nome() + ".nome", m_dono.nome() );
    hortaData.insert( "dono." + m_dono.nome() + ".cidade", QString("%1").arg(m_dono.cidade()) );
    hortaData.insert( "dono." + m_dono.nome() + ".pais", QString("%1").arg(m_dono.pais()) );
    ret.append(hortaData);
    for( int i = 0; i < m_plantacao.size(); i++ ) {
        ret.append( m_plantacao.at(i).mappedData() );
    }
    return ret;
}
