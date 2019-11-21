#ifndef HORTA_H
#define HORTA_H

#include <QObject>

#include "Dono.h"
#include "Plantacao.h"

class Horta : public QObject
{
    Q_OBJECT
public:
    explicit Horta( QString m_nome, Dono dono,  Plantacao plantacao = Plantacao(), QObject *parent = nullptr);

    QString nome() const;
    void setNome(const QString &nome);

    Dono dono() const;
    void setDono(const Dono &dono);

    QList<Plantacao> plantacao() const;
    Plantacao plantacaoPorNome( QString nome ) const;
    void atualizaRegadaDePlantacao( QString plantacao );
    void setPlantacao(const QList<Plantacao> &plantacao);
    void addPlantacao(Plantacao plantacao);

    QList<QMap<QString, QString>> mappedData();

signals:

public slots:

private:
    QString m_nome;
    Dono m_dono;
    QList<Plantacao> m_plantacao;
};

#endif // HORTA_H
