/********************************************************************************
** Form generated from reading UI file 'adiciona.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONA_H
#define UI_ADICIONA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Adiciona
{
public:
    QDialogButtonBox *buttonBox;

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

        retranslateUi(Adiciona);
        QObject::connect(buttonBox, SIGNAL(accepted()), Adiciona, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Adiciona, SLOT(reject()));

        QMetaObject::connectSlotsByName(Adiciona);
    } // setupUi

    void retranslateUi(QDialog *Adiciona)
    {
        Adiciona->setWindowTitle(QApplication::translate("Adiciona", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adiciona: public Ui_Adiciona {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONA_H
