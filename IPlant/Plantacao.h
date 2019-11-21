#ifndef PLANTACAO_H
#define PLANTACAO_H

#include <QObject>
#include <QDateTime>

class Plantacao
{
public:
    explicit Plantacao(QString nome, int quantidade, int nivelAntencao, QDateTime dataPlantio, QObject *parent = nullptr);

    explicit Plantacao( QObject *parent = nullptr );

    QString nome() const;
    void setNome(const QString &nome);

    int quantidade() const;
    void setQuantidade(int quantidade);

    int nivelAtencao() const;
    void setNivelAtencao(int nivelAtencao);

    QDateTime ultimaRegada() const;
    void setUltimaRegada(const QDateTime &ultimaRegada);
    void atualizaRegada();

    QMap<QString, QString> mappedData() const;

    QDateTime dataPlantio() const;
    void setDataPlantio(const QDateTime &dataPlantio);


signals:

public slots:

private:
    QString m_nome;
    int m_quantidade;
    int m_nivelAtencao;
    QDateTime m_dataPlantio;
    QDateTime m_ultimaRegada;
};
#endif // PLANTACAO_H
