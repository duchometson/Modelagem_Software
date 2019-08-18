#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QNetworkReply>
#include <QMainWindow>

#include "ControllerManager.h"

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void updateLabels(QByteArray b);
private:
    QByteArray m_buffer;
    Ui::MainWindow *ui;
    QSharedPointer<ControllerManager> m_controlManager;
};

#endif // MAINWINDOW_H
