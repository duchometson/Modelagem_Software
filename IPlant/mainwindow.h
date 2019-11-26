#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Horta.h"
#include "Recomendacao.h"

#include <QNetworkReply>
#include <QMainWindow>
#include <QtWidgets>
#include "ControllerManager.h"
#include <QQuickWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString currentFileName() const;

    void setCurrentFileName(const QString &currentFileName);

private slots:
    void aquireDataFromController();

    void updateLabels(QByteArray b);

    void changeAquireStatus(bool state);

    void registraNovaHorta( Horta *horta );

    void on_actionCarregar_Horta_triggered();

    void on_actionNova_Horta_triggered();

    void on_addPushButton_clicked();

    void on_actionSalvar_triggered();

    void on_plantacoesComboBox_currentTextChanged(const QString &arg1);

    void on_regarButton_clicked();

    void on_actionFechar_triggered();

private:
    void updateFields();
    void resetFields();
    void noHortaSetup();
    void recomendacoesPadroes();
    void atualizaRecomendacoes();

    void salvar();

    QByteArray m_buffer;
    Ui::MainWindow *ui;
    QSharedPointer<ControllerManager> m_controlManager;
    QQuickWidget *m_quickWidget;
    QSharedPointer<Horta> m_horta;
    QHash<QString,Recomendacao> m_recomendacao;
    QString m_currentFileName;
};

#endif // MAINWINDOW_H
