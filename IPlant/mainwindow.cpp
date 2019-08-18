#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adiciona.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_controlManager(new ControllerManager())
{
    ui->setupUi(this);
    connect(m_controlManager.data(),SIGNAL(replyReady(QByteArray)),
            this,SLOT(updateLabels(QByteArray)));
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

void MainWindow::on_pushButton_2_clicked()
{
    QVariant data = m_controlManager->getCurrentData();
//    qDebug() << "botafogo: " << data.toString();
//    QStringList dataListed = data.toString().split(",");
//    ui->iluminacaoLabel->setText(dataListed.at(0));
//    ui->umidadeLabel->setText(dataListed.at(1));
//    ui->temperaturaLabel->setText(dataListed.at(2));
}

void MainWindow::updateLabels(QByteArray b) {
    QStringList list = QString(b.constData()).split(",");
    ui->iluminacaoLabel->setText(list.at(0));
    ui->umidadeLabel->setText(list.at(1));
    ui->temperaturaLabel->setText(list.at(2));
}
