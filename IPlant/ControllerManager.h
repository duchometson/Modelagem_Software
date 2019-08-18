#ifndef CONTROLLERMANAGER_H
#define CONTROLLERMANAGER_H
#include<QVariant>
#include <QNetworkReply>
#include <QObject>

class ControllerManager : public QObject
{

    Q_OBJECT

public:
    ControllerManager();
    QVariant getPos();
    QVariant getCurrentData();
    QVariant getAllData();

private:
    QByteArray m_buffer;
    QNetworkAccessManager * m_manager;
    QNetworkRequest m_request;

signals:
    void replyReady(QByteArray b);

private slots:
    void reply(QNetworkReply* r);

};

#endif // CONTROLLERMANAGER_H
