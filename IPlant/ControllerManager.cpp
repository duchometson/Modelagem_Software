#include "ControllerManager.h"
#include <QUrl>

ControllerManager::ControllerManager() {

}

//QVariant ControllerManager::getAllData() {
//    QUrl source("192.168.4.1/get_data");
//    textBrowser.setSource(source);
//    return textBrowser.loadResource(QTextDocument::HtmlResource, source);
//}

//QVariant ControllerManager::getCurrentData() {
//    QUrl source = QUrl("192.168.4.1/get_pos");
//    QVariant currentPos = getPos();
//    QVariant allData = getAllData();
//    QList<QString> listAllData = allData.toList();
//    return listAllData.at(currentPos.toInt);
//}

//QVariantControllerManager::getPos() {
//    QUrl source = QUrl("192.168.4.1/get_pos");
//    textBrowser.setSource(source);
//    return textBrowser.loadResource(QTextDocument::HtmlResource, source);
//}
