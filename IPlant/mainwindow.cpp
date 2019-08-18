#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adiciona.h"
#include <QTimer>
#include <QQuickView>
#include <QSize>
#include <QQuickWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_controlManager(new ControllerManager()),
    m_quickWidget(new QQuickWidget(this))
{
    ui->setupUi(this);
    connect(m_controlManager.data(),SIGNAL(replyReady(QByteArray)),
            this,SLOT(updateLabels(QByteArray)));

    ui->iluminacao_progressBar->setRange(0,100);
    ui->umidade_progressBar->setRange(0,200);
    ui->temperatura_progressBar->setRange(20,30);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(on_pushButton_2_clicked()));
    timer->start(2000);

//    m_quickWidget->resize(QSize(100,100));
//    m_quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView );
//    m_quickWidget->setSource(QUrl::fromLocalFile("exemplo.qml"));
//    m_quickWidget->show();

    //ui->quickWidget->resize(QSize(100,100));
    ui->quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView );
    ui->quickWidget->setSource(QUrl::fromLocalFile("main.qml"));
    ui->quickWidget->show();



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
    int ilu =list.at(0).toInt();
    if (ilu < 15 || ilu > 85) {
        QPalette palette;
        palette.setBrush(QPalette::Highlight, QBrush(Qt::red));
        ui->iluminacao_progressBar->setPalette(palette);
    }
    else {
        QPalette palette;
        palette.setBrush(QPalette::Highlight, QBrush(Qt::green));
        ui->iluminacao_progressBar->setPalette(palette);
    }

    ui->iluminacao_progressBar->setValue(list.at(0).toInt());

    ui->umidadeLabel->setText(list.at(1));
    QStringList chop = list.at(1).split(".");
    ui->umidade_progressBar->setValue(chop.at(0).toInt());

    chop = list.at(2).split(".");
    ui->temperaturaLabel->setText(list.at(2));
    ui->temperatura_progressBar->setValue(chop.at(0).toInt());

}
