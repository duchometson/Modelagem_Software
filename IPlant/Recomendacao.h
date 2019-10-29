#ifndef RECOMENDACAO_H
#define RECOMENDACAO_H

#include <QObject>

class Recomendacao
{
public:
    Recomendacao();

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

private:
    QString m_estacao;
    QString m_clima;
    QString m_umidade;
    QString m_temperatura;
    QString m_luminosidade;
};

#endif // RECOMENDACAO_H
