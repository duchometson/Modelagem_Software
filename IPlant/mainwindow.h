#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Horta.h"

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

private slots:
    void aquireDataFromController();

    void updateLabels(QByteArray b);

    void changeAquireStatus(bool state);

    void registraNovaHorta( Horta *horta );

    void on_actionCarregar_Horta_triggered();

    void on_actionNova_Horta_triggered();

    void on_addPushButton_clicked();

    void on_actionSalvar_triggered();

private:
    QByteArray m_buffer;
    Ui::MainWindow *ui;
    QSharedPointer<ControllerManager> m_controlManager;
    QQuickWidget *m_quickWidget;
    QSharedPointer<Horta> m_horta;
};

#endif // MAINWINDOW_H
