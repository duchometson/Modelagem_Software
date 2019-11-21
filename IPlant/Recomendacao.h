#ifndef RECOMENDACAO_H
#define RECOMENDACAO_H

#include <QObject>

class Recomendacao
{
public:
    Recomendacao( QString plantacao, QString estacao, QString clima, QString umidade, QString temperatura, QString luminosidade );

    QString estacao() const;
    void setEstacao(const QString &estacao);

    QString clima() const;
    void setClima(const QString &clima);

    QString umidade() const;
    void setUmidade(const QString &umidade);

    QString temperatura() const;
    void setTemperatura(const QString &temperatura);

    QString luminosidade() const;
    void setLuminosidade(const QString &luminosidade);

    QString plantacao() const;
    void setPlantacao(const QString &plantacao);

private:
    QString m_plantacao;
    QString m_estacao;
    QString m_clima;
    QString m_umidade;
    QString m_temperatura;
    QString m_luminosidade;
};

#endif // RECOMENDACAO_H
