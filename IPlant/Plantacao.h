#ifndef PLANTACAO_H
#define PLANTACAO_H

#include <QObject>

class Plantacao
{
public:
    explicit Plantacao(QObject *parent = nullptr);

    QString nome() const;
    void setNome(const QString &nome);

    int quantidade() const;
    void setQuantidade(int quantidade);

    int nivelAtencao() const;
    void setNivelAtencao(int nivelAtencao);

signals:

public slots:

private:
    QString m_nome;
    int m_quantidade;
    int m_nivelAtencao;
};

#endif // PLANTACAO_H
