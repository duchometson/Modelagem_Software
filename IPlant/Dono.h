#ifndef DONO_H
#define DONO_H

#include <QObject>

enum NivelConhecimento {
    INICIANTE,
    MEDIANO,
    AVANCADO
};


class Dono
{
public:
    explicit Dono( QString nome, QString cidade, QString pais, int nivelConhecimento, QObject *parent = nullptr);

    QString nome() const;
    void setNome(const QString &nome);

    QString cidade() const;
    void setCidade(const QString &cidade);

    QString pais() const;
    void setPais(const QString &pais);

    int nivelConhecimento() const;
    void setNivelConhecimento(int nivelConhecimento);

private:
    QString m_nome;
    QString m_cidade;
    QString m_pais;
    int m_nivelConhecimento;
};

#endif // DONO_H
