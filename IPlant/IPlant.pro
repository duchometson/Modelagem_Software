#-------------------------------------------------
#
# Project created by QtCreator 2019-08-17T23:54:27
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT += quick
QT += quickwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IPlant
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    Dono.cpp \
    Horta.cpp \
    JSONManager.cpp \
    NovaHorta.cpp \
    Plantacao.cpp \
    Recomendacao.cpp \
    cnc.cpp \
        main.cpp \
        mainwindow.cpp \
    adiciona.cpp \
    ControllerManager.cpp

HEADERS += \
    Dono.h \
    Horta.h \
    JSONManager.h \
    NovaHorta.h \
    Plantacao.h \
    Recomendacao.h \
    cnc.h \
        mainwindow.h \
    adiciona.h \
    ControllerManager.h

FORMS += \
    NovaHorta.ui \
        mainwindow.ui \
    adiciona.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../../../../Qt/Examples/Qt-5.13.0/charts/qmlaxes/qml/qmlaxes/View1.qml \
    ../../../../../../../Qt/Examples/Qt-5.13.0/charts/qmlaxes/qml/qmlaxes/View2.qml \
    ../../../../../../../Qt/Examples/Qt-5.13.0/charts/qmlaxes/qml/qmlaxes/View3.qml \
    ../../../../../../../Qt/Examples/Qt-5.13.0/charts/qmlaxes/qml/qmlaxes/main.qml \
    exemplo.qml \
    iluminacao_grafico.qml
