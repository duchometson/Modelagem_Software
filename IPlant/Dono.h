#ifndef DONO_H
#define DONO_H

#include <QObject>

class Dono
{
public:
    explicit Dono( QString nome, QString cidade, QString pais, QObject *parent = nullptr);

    QString nome() const;
    void setNome(const QString &nome);

    QString cidade() const;
    void setCidade(const QString &cidade);

    QString pais() const;
    void setPais(const QString &pais);

private:
    QString m_nome;
    QString m_cidade;
    QString m_pais;
};

#endif // DONO_H
