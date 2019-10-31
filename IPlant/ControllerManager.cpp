#include "ControllerManager.h"
#include <QUrl>

#include <QUrl>

ControllerManager::ControllerManager() :
    m_manager( new QNetworkAccessManager()),
    m_shouldAquire(false)
{
    connect(m_manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(reply(QNetworkReply*)));
}

QVariant ControllerManager::getAllData() {
    if( m_shouldAquire ) {
        m_buffer.clear();
        QUrl source = QUrl("http://192.168.4.1/get_data");
        if (source.isValid()) {
            qDebug() << "URL VALIDA";
        }
        m_request.setUrl(source);
        m_manager->get(m_request);
    }
    return QVariant();
}

QVariant ControllerManager::getCurrentData() {
    if( m_shouldAquire ) {
        m_buffer.clear();
        QUrl source = QUrl("http://192.168.4.1/get_ins");
        m_request.setUrl(source);
        m_manager->get(m_request);
        //return m_buffer.constData();
    }
    return QVariant();
}

QVariant ControllerManager::getPos() {
    if( m_shouldAquire ) {
        m_buffer.clear();
        QUrl source = QUrl("http://192.168.4.1/get_pos");
        m_request.setUrl(source);
        m_manager->get(m_request);
    }
    return QVariant();
}

void ControllerManager::reply(QNetworkReply *reply)
{
    QByteArray bytes = reply->readAll();
    QString str = QString::fromUtf8(bytes.data(), bytes.size());
    int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(statusCode == 302)
    {
        QUrl newUrl = reply->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
        qDebug() << "redirected from " + reply->url().toString() + " to " + newUrl.toString();
        QNetworkRequest newRequest(newUrl);
        m_manager->get(newRequest);
        return;
    }

    if (reply->error()) {
        qDebug() << reply->errorString();
    }

    qDebug() << bytes;
    emit replyReady(bytes);
}

int ControllerManager::getShouldAquire() const
{
    return m_shouldAquire;
}

void ControllerManager::setShouldAquire(int shouldAquire)
{
    m_shouldAquire = shouldAquire;
}
