#include "JSONManager.h"

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>


#include <QVariant>
#include <QFile>
#include <QMessageBox>


JSONManager::JSONManager()
{

}

QMap<QString, QVariant> JSONManager::load(const QString &fileName)
{
    QFile file(fileName);
    QMap<QString,QVariant> ret;
    if( file.exists() ) {
        QJsonObject jsObj;
        QJsonDocument jsDoc;
        jsDoc.fromJson(file.readAll());

        QVariant variantList = jsDoc.toVariant();
        ret = variantList.toMap();
    }
    return ret;
}

bool JSONManager::write(QList<QMap<QString, QString>> data, const QString &fileName)
{
    QFile file(fileName);
    bool ret = false;
    if( file.exists() ) {
        QJsonObject jsObj;
        for (QMap<QString,QString> mappedData : data ) {
            for (QString key : mappedData.keys() ) {
                jsObj[key] = mappedData.value(key);
            }
        }
        QJsonDocument jsDoc;
        jsDoc.setObject(jsObj);
        if( jsDoc.isEmpty() ) {
            QMessageBox::warning( NULL , "Erro na gravação", "Não existem elementos criados para ser gravados", QMessageBox::Ok );
            ret = false;
        } else {
            if( file.open( QIODevice::WriteOnly ) ) {
                QByteArray dataJson = jsDoc.toJson();
                file.write( dataJson );
                file.close();
                ret = true;
            } else {
                QMessageBox::warning( NULL , "Erro na gravação", "Arquivo inserido não existe", QMessageBox::Ok );
            }
        }
    }
    return ret;
}
