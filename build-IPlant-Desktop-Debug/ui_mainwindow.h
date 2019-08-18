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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QGroupBox *groupBox_3;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *tab_3;
    QLabel *label_5;
    QLabel *iluminacaoLabel;
    QLabel *label_7;
    QLabel *umidadeLabel;
    QLabel *label_8;
    QLabel *temperaturaLabel;
    QProgressBar *iluminacao_progressBar;
    QProgressBar *umidade_progressBar;
    QProgressBar *temperatura_progressBar;
    QWidget *tab_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(357, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setGeometry(QRect(0, 0, 331, 301));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMaximumSize(QSize(340, 401));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 469, 309));
        scrollAreaWidgetContents->setMinimumSize(QSize(469, 309));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(289, 100));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8("../Legumes/Cenoura.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 30, 161, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 50, 171, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 70, 171, 17));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(289, 100));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 10, 91, 91));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../Legumes/Chuchu.png")));
        label_6->setScaledContents(true);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(100, 30, 161, 17));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 50, 171, 17));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(100, 70, 171, 17));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMinimumSize(QSize(289, 100));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 20, 71, 61));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../Legumes/Tomate.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(100, 30, 161, 17));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(100, 50, 171, 17));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(100, 70, 171, 17));

        verticalLayout->addWidget(groupBox_3);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 30, 101, 17));
        iluminacaoLabel = new QLabel(tab_3);
        iluminacaoLabel->setObjectName(QString::fromUtf8("iluminacaoLabel"));
        iluminacaoLabel->setGeometry(QRect(100, 30, 67, 17));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 70, 101, 17));
        umidadeLabel = new QLabel(tab_3);
        umidadeLabel->setObjectName(QString::fromUtf8("umidadeLabel"));
        umidadeLabel->setGeometry(QRect(100, 70, 67, 17));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 110, 101, 17));
        temperaturaLabel = new QLabel(tab_3);
        temperaturaLabel->setObjectName(QString::fromUtf8("temperaturaLabel"));
        temperaturaLabel->setGeometry(QRect(100, 110, 67, 17));
        iluminacao_progressBar = new QProgressBar(tab_3);
        iluminacao_progressBar->setObjectName(QString::fromUtf8("iluminacao_progressBar"));
        iluminacao_progressBar->setGeometry(QRect(150, 30, 131, 23));
        iluminacao_progressBar->setValue(24);
        umidade_progressBar = new QProgressBar(tab_3);
        umidade_progressBar->setObjectName(QString::fromUtf8("umidade_progressBar"));
        umidade_progressBar->setGeometry(QRect(150, 70, 131, 23));
        umidade_progressBar->setValue(24);
        temperatura_progressBar = new QProgressBar(tab_3);
        temperatura_progressBar->setObjectName(QString::fromUtf8("temperatura_progressBar"));
        temperatura_progressBar->setGeometry(QRect(150, 110, 131, 23));
        temperatura_progressBar->setValue(24);
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(5, 10, 356, 226));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_3->addWidget(label_16);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_3->addWidget(label_17);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_3->addWidget(label_18);

        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_3->addWidget(label_19);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_3->addWidget(label_20);

        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_3->addWidget(label_21);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_3->addWidget(label_22);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_3->addWidget(label_23);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_3->addWidget(label_24);

        label_25 = new QLabel(widget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_3->addWidget(label_25);

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

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "IPlant", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Cenoura", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Colheita em: 3 Dias", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Ultima regada: 18 Horas", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Nivel de Aten\303\247\303\243o: Baixo", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Chuchu", nullptr));
        label_6->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Colheita em: 1 Dias", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Ultima regada: 18 Horas", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Nivel de Aten\303\247\303\243o: M\303\251dio", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Tomate", nullptr));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Colheita em: 7 Dias", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Ultima regada: 18 Horas", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Nivel de Aten\303\247\303\243o: Alto", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Meu Jardim", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Ilumina\303\247\303\243o:", nullptr));
        iluminacaoLabel->setText(QApplication::translate("MainWindow", ".", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Umidade:", nullptr));
        umidadeLabel->setText(QApplication::translate("MainWindow", ".", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Temperatura:", nullptr));
        temperaturaLabel->setText(QApplication::translate("MainWindow", ".", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Cultivador", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "- Baseada na sua localiza\303\247\303\243o plantar tomate \303\251 o", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "mais recomendado.", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "- ", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "- ", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "- ", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "- ", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "- ", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "- ", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "- ", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "- ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Recomenda\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
