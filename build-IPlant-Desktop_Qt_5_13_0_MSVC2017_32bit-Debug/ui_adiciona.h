/********************************************************************************
** Form generated from reading UI file 'adiciona.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONA_H
#define UI_ADICIONA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adiciona
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QComboBox *comboBox_2;

    void setupUi(QDialog *Adiciona)
    {
        if (Adiciona->objectName().isEmpty())
            Adiciona->setObjectName(QString::fromUtf8("Adiciona"));
        Adiciona->resize(357, 460);
        buttonBox = new QDialogButtonBox(Adiciona);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-80, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(Adiciona);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 17, 331, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(2019, 8, 18), QTime(0, 0, 7)));

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 2, 1, 1, 1);


        retranslateUi(Adiciona);
        QObject::connect(buttonBox, SIGNAL(accepted()), Adiciona, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Adiciona, SLOT(reject()));

        QMetaObject::connectSlotsByName(Adiciona);
    } // setupUi

    void retranslateUi(QDialog *Adiciona)
    {
        Adiciona->setWindowTitle(QCoreApplication::translate("Adiciona", "IPlant", nullptr));
        label->setText(QCoreApplication::translate("Adiciona", "Legume", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Adiciona", "Ab\303\263bora", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Adiciona", "Abobrinha", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Adiciona", "Berinjela", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Adiciona", "Cenoura", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Adiciona", "Chuchu", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Adiciona", "Mandioca", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Adiciona", "Quiabo", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Adiciona", "Tomate", nullptr));

        label_2->setText(QCoreApplication::translate("Adiciona", "Data do plantio", nullptr));
        label_3->setText(QCoreApplication::translate("Adiciona", "Nivel de anten\303\247\303\243o", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Adiciona", "Alto", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Adiciona", "M\303\251dio", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Adiciona", "Baixo", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Adiciona: public Ui_Adiciona {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONA_H
