#ifndef RECOMENDACAO_H
#define RECOMENDACAO_H

#include <QObject>

class Recomendacao
{
public:
    Recomendacao( QString plantacao, QString estacao, QString clima, int umidade, int temperatura, int luminosidade );

    QString estacao() const;
    void setEstacao(const QString &estacao);

    QString clima() const;
    void setClima(const QString &clima);

    int umidade() const;
    void setUmidade(int umidade);

    int temperatura() const;
    void setTemperatura(int temperatura);

    int luminosidade() const;
    void setLuminosidade(int luminosidade);

    QString plantacao() const;
    void setPlantacao(const QString &plantacao);

private:
    QString m_plantacao;
    QString m_estacao;
    QString m_clima;
    int m_umidade;
    int m_temperatura;
    int m_luminosidade;
};

#endif // RECOMENDACAO_H
