#ifndef JSONMANAGER_H
#define JSONMANAGER_H

#include <QJsonDocument>
#include <QObject>
#include <QMap>

class JSONManager
{
public:
    JSONManager();

    QMap<QString,QVariant> load(const QString& fileName );
    bool write( QMap<QVariant,QVariant> data, const QString& fileName );
};

#endif // JSONMANAGER_H
