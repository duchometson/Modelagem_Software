#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "adiciona.h"
#include "JSONManager.h"
#include "NovaHorta.h"

#include <QTimer>
#include <QQuickView>
#include <QSize>
#include <QQuickWidget>

#define SECS_IN_A_DAY 86400
#define TODA_TEMP 1000
#define TODA_UMID 1000
#define TODA_LUM 1000

#define LUM_ALTA 85
#define LUM_MEDIA 50
#define LUM_BAIXA 15

#define UMID_ALTA 170
#define UMID_MEDIA 100
#define UMID_BAIXA 45


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_controlManager(new ControllerManager()),
    m_quickWidget(new QQuickWidget(this))
{
    ui->setupUi(this);
    recomendacoesPadroes();
    connect(m_controlManager.data(),SIGNAL(replyReady(QByteArray)),
            this,SLOT(updateLabels(QByteArray)));
    connect(ui->aquireButton, SIGNAL(clicked(bool)),
            this, SLOT(changeAquireStatus(bool)));

    noHortaSetup();
    ui->aquireButton->setCheckable(true);
    ui->iluminacao_progressBar->setRange(0,100);
    ui->umidade_progressBar->setRange(0,200);
    ui->temperatura_progressBar->setRange(20,30);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(aquireDataFromController()));
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

void MainWindow::noHortaSetup() {
    ui->tabWidget->setEnabled(false);
    ui->actionSalvar->setEnabled(false);
    ui->actionFechar->setEnabled(false);
    ui->aquireButton->setChecked(false);
}

void MainWindow::aquireDataFromController()
{
    QVariant data = m_controlManager->getCurrentData();
}

void MainWindow::updateLabels(QByteArray b) {
    QStringList list = QString(b.constData()).split(",");

    ui->iluminacaoLabel->setText(list.at(0));
    int ilu =list.at(0).toInt();
    if ( ilu < LUM_BAIXA ) {
        QPalette palette;
        palette.setBrush(QPalette::Highlight, QBrush(Qt::red));
        ui->iluminacao_progressBar->setPalette(palette);
        ui->recoIluLabel->setText("Iluminação Baixa Demais. Mova para um local mais claro.");
    }
    else {
        QPalette palette;
        palette.setBrush(QPalette::Highlight, QBrush(Qt::green));
        ui->iluminacao_progressBar->setPalette(palette);
        ui->recoIluLabel->setText("Iluminação Boa.");
    }

    ui->iluminacao_progressBar->setValue(list.at(0).toInt());

    ui->umidadeLabel->setText(list.at(1));
    QStringList chop = list.at(1).split(".");
    ui->umidade_progressBar->setValue(chop.at(0).toInt());

    for( Recomendacao r : m_recomendacao.values(m_horta->dono().cidade()) ) {
        if( ui->plantacoesComboBox->currentText() == r.plantacao() ) {
            ui->recoUmidLabel->setText("Umidade Boa.");
        } else {
            ui->recoUmidLabel->setText("Umidade não recomendada.");
        }
    }

    chop = list.at(2).split(".");
    ui->temperaturaLabel->setText(list.at(2));
    ui->temperatura_progressBar->setValue(chop.at(0).toInt());

    for( Recomendacao r : m_recomendacao.values(m_horta->dono().cidade()) ) {
        if( ui->plantacoesComboBox->currentText() == r.plantacao() ) {
            if( r.temperatura() - 3 < chop.at(0).toInt() &&
                chop.at(0).toInt() < r.temperatura() + 3 ) {
                QPalette palette;
                palette.setBrush(QPalette::Highlight, QBrush(Qt::red));
                ui->iluminacao_progressBar->setPalette(palette);
                int tempIdeal = r.temperatura();
                QString result = ( r.temperatura() - 3 < chop.at(0).toInt() ) ? QString("Abaixo") : QString("Acima");
                ui->recoTempLabel->setText(QString("Temperatura %1 do ideal. Ideal: %2").arg(result).arg(tempIdeal));
            } else {
                ui->recoTempLabel->setText("Temperatura boa.");
            }
        }
    }

}

void MainWindow::changeAquireStatus(bool shouldAquire)
{
    m_controlManager->setShouldAquire(shouldAquire);
}

void MainWindow::registraNovaHorta(Horta *horta)
{
    m_horta.reset(horta);
    QString dir = QFileDialog::getExistingDirectory();
    QString fileFullPath = dir + "/" + m_horta->nome() + ".json";
    QFile file(fileFullPath);
    setCurrentFileName(fileFullPath);
    file.open( QIODevice::WriteOnly );
    file.write("");
    file.close();
}

void MainWindow::on_actionCarregar_Horta_triggered()
{
    QString fileName = QFileDialog::getOpenFileName( this, "Escolha Horta");
    JSONManager jsManager;
    QMap<QString, QVariant> jsonData = jsManager.load(fileName);
    setCurrentFileName(fileName);
    QList<QString> plantacaoLida;
    int contadorPlantacao = 0;
    QString nomeDono;
    QString cidadeDono;
    QString paisDono;
    QString conhecimentoDono;
    QString hortaName;
    for( QString key : jsonData.keys() ) {
        if( key.contains("Horta") ) {
            hortaName = jsonData.value(key).toString();
        }
        if( key.contains("dono") ) {
            if( key.contains("nome") ) {
                nomeDono = jsonData.value(key).toString();
            } else if( key.contains("cidade") ) {
                cidadeDono = jsonData.value(key).toString();
            } else if( key.contains("pais") ) {
                paisDono = jsonData.value(key).toString();
            }
        }
        if( key.contains("plantacao" ) ) {
            if( key.contains("nome") ) {
                plantacaoLida.append(jsonData.value(key).toString());
                contadorPlantacao++;
            }
        }
    }
    QList<Plantacao> listPlantacao;
    int itensCount = 0;
    Plantacao plantacao;
    QVariant atencao;
    QVariant quantidade;
    QVariant regado;
    QVariant plantado;
    for( QString key : jsonData.keys() ) {
        for( QString nome : plantacaoLida ) {
            if( key.contains(nome) ) {
                itensCount++;
                if( key.contains("atencao")) {
                    atencao = jsonData.value(key);
                } else if( key.contains("quantidade") ) {
                    quantidade = jsonData.value(key);
                } else if( key.contains("regado") ) {
                    regado = jsonData.value(key);
                } else if( key.contains("plantado") ) {
                    plantado = jsonData.value(key);
                }
                if( itensCount == 4) {
                    plantacao = Plantacao( nome, quantidade.toInt(), atencao.toInt(), QDateTime::fromSecsSinceEpoch(plantado.toInt()) );
                    plantacao.setUltimaRegada(QDateTime::fromSecsSinceEpoch(regado.toInt()));
                    listPlantacao.append(plantacao);
                    itensCount = 0;
                    contadorPlantacao--;
                }
            }
        }
    }
    Dono dono = Dono(nomeDono, cidadeDono, paisDono);
    m_horta.reset(new Horta( hortaName, dono ));
    for( Plantacao plant : listPlantacao ) {
        m_horta->addPlantacao(plant);
    }
    resetFields();
    updateFields();
    ui->tabWidget->setEnabled(true);
    ui->actionSalvar->setEnabled(true);
    ui->actionFechar->setEnabled(true);
}

void MainWindow::on_actionNova_Horta_triggered()
{
    NovaHorta *nv = new NovaHorta();
    connect(nv, SIGNAL(novaHorta(Horta*)),
            this, SLOT(registraNovaHorta(Horta*)));
    nv->open();
    ui->tabWidget->setEnabled(true);
    ui->actionSalvar->setEnabled(true);
    ui->actionFechar->setEnabled(true);
}

void MainWindow::on_addPushButton_clicked()
{
    Adiciona* a = new Adiciona( m_horta, this);
    a->exec();
    if( !m_horta->plantacao().empty() ) {
        resetFields();
        updateFields();
    }
}

void MainWindow::on_actionSalvar_triggered()
{
    salvar();
}

void MainWindow::updateFields() {
    QString currentPlantacao = ui->plantacoesComboBox->currentText();
    if( !currentPlantacao.isEmpty() ) {
        ui->plantacaoLabel->setText( m_horta->plantacaoPorNome(currentPlantacao).nome() );
        ui->datPlantioLabel->setText( m_horta->plantacaoPorNome(currentPlantacao).dataPlantio().toString());
        ui->quantidadeLabel->setText( QString("%1").arg(m_horta->plantacaoPorNome(currentPlantacao).quantidade()) );
        QDateTime dt =  m_horta->plantacaoPorNome(currentPlantacao).ultimaRegada();
        if( QDateTime::currentSecsSinceEpoch() - m_horta->plantacaoPorNome(currentPlantacao).ultimaRegada().toSecsSinceEpoch() > SECS_IN_A_DAY ) {
            ui->regadoLabel->setText("Sim");
        } else {
            ui->regadoLabel->setText("Não");
        }
    }
    atualizaRecomendacoes();
    if( !m_horta.isNull() ) {
        ui->cidadeLabel->setText( m_horta->dono().cidade() );
    }
}

void MainWindow::resetFields() {
    ui->plantacoesComboBox->clear();
    ui->plantacaoLabel->clear();
    ui->quantidadeLabel->clear();
    ui->regadoLabel->clear();
    for( int i = 0; i < m_horta->plantacao().size(); i++) {
        qDebug() << m_horta->plantacao().at(i).nome() << "\n";
        ui->plantacoesComboBox->addItem( m_horta->plantacao().at(i).nome());
    }
}

void MainWindow::on_plantacoesComboBox_currentTextChanged(const QString &arg1)
{
    updateFields();
}

void MainWindow::on_regarButton_clicked()
{
    if( !m_horta.isNull() ) {
        m_horta->atualizaRegadaDePlantacao( ui->plantacoesComboBox->currentText() );
        updateFields();

    }
}

void MainWindow::on_actionFechar_triggered()
{
    if( !m_horta.isNull() ) {
        salvar();
        noHortaSetup();
        m_horta.clear();
    }
}

void MainWindow::salvar() {
    JSONManager jsManager;
    QList<QMap<QString, QString>> data = m_horta->mappedData();
    jsManager.write( data, currentFileName() );
}

void MainWindow::setCurrentFileName(const QString &currentFile)
{
    m_currentFileName = currentFile;
}

QString MainWindow::currentFileName() const
{
    return m_currentFileName;
}

void MainWindow::recomendacoesPadroes() {
    m_recomendacao.insert("Florianópolis", Recomendacao("Maça", "Verão", "Morno", UMID_ALTA, 26, LUM_ALTA ));
    m_recomendacao.insert("Florianópolis", Recomendacao("Milho", "Inverno", "Frio", UMID_BAIXA, 12, LUM_MEDIA ));
    m_recomendacao.insert("Rio de Janeiro", Recomendacao("Banana", "Todas", "Todas", TODA_UMID, TODA_TEMP, TODA_LUM ));
    m_recomendacao.insert("Rio de Janeiro", Recomendacao("Tomate", "Inverno", "Ameno", UMID_MEDIA, 20, LUM_MEDIA ));
    m_recomendacao.insert("Rio de Janeiro", Recomendacao("Uva", "Inverno", "Ameno", UMID_MEDIA, 20, LUM_MEDIA ));
    m_recomendacao.insert("Natal", Recomendacao("Manga", "Verão", "Quente", UMID_ALTA, 30, LUM_MEDIA ));
    m_recomendacao.insert("Natal", Recomendacao("Feijão", "Primavera", "Morno", UMID_ALTA, 25, LUM_MEDIA ));
    m_recomendacao.insert("Manaus", Recomendacao("Milho", "Inverno", "Quente", UMID_ALTA, 27, LUM_MEDIA ));
    m_recomendacao.insert("Manaus", Recomendacao("Maracujá", "Todas", "Todas", TODA_UMID, 1000, TODA_LUM ));
}

void MainWindow::atualizaRecomendacoes() {
    ui->recomendacoesLista->clear();
    for( Recomendacao r : m_recomendacao.values(m_horta->dono().cidade())) {
        ui->recomendacoesLista->addItem(r.plantacao());
    }
}
