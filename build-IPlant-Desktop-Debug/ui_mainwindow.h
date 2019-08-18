/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_5;
    QLabel *iluminacaoLabel;
    QLabel *label_7;
    QLabel *umidadeLabel;
    QLabel *label_8;
    QLabel *temperaturaLabel;
    QPushButton *pushButton_2;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(357, 460);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 101, 17));
        iluminacaoLabel = new QLabel(tab_3);
        iluminacaoLabel->setObjectName(QString::fromUtf8("iluminacaoLabel"));
        iluminacaoLabel->setGeometry(QRect(110, 50, 67, 17));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 80, 101, 17));
        umidadeLabel = new QLabel(tab_3);
        umidadeLabel->setObjectName(QString::fromUtf8("umidadeLabel"));
        umidadeLabel->setGeometry(QRect(110, 80, 67, 17));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 110, 101, 17));
        temperaturaLabel = new QLabel(tab_3);
        temperaturaLabel->setObjectName(QString::fromUtf8("temperaturaLabel"));
        temperaturaLabel->setGeometry(QRect(110, 110, 67, 17));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 140, 89, 25));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 101));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/cenoura.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 30, 161, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 50, 161, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 70, 161, 17));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 300, 89, 25));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 357, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Ilumina\303\247\303\243o:", nullptr));
        iluminacaoLabel->setText(QApplication::translate("MainWindow", ".", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Umidade:", nullptr));
        umidadeLabel->setText(QApplication::translate("MainWindow", ".", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Temperatura:", nullptr));
        temperaturaLabel->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Get Data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Cultivador", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Cenoura", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Colheita em: 3 Dias", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Ultima regada: 18 Horas", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Ultima regada: 18 Horas", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Meu Jardim", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Recomenda\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
