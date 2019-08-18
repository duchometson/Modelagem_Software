#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adiciona.h"

#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Adiciona* a = new Adiciona(this);
    a->exec();
}

QVariant MainWindow::getAllData() {
    QUrl source("192.168.4.1/get_data");
    QByteArray data = source.toEncoded();
    QString allData = data.constData();
    QStringList allDataListed = allData.split(";");
    return allDataListed;
}

QVariant MainWindow::getCurrentData() {
    QUrl source = QUrl("192.168.4.1/get_pos");
    QVariant currentPos = getPos();
    QVariant allData = getAllData();
    QList<QVariant> listAllData = allData.toList();
    return listAllData.at(currentPos.toInt());
}

QVariant MainWindow::getPos() {
    QUrl source = QUrl("192.168.4.1/get_pos");
    QByteArray data = source.toEncoded();
    QString posString = source.toEncoded();
    return posString.toInt();
}

void MainWindow::on_pushButton_2_clicked()
{
    QVariant data = getCurrentData();
    QStringList dataListed = data.toString().split(",");
    ui->iluminacaoLabel->setText(dataListed.at(0));
    ui->umidadeLabel->setText(dataListed.at(1));
    ui->temperaturaLabel->setText(dataListed.at(2));
}
