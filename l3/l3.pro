#-------------------------------------------------
#
# Project created by QtCreator 2018-03-10T13:21:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets positioning printsupport

CONFIG += c++11
TARGET = l1
TEMPLATE = app

include( ../common.pri )
include( ../app.pri )

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    routesmodel.cpp \
    route.cpp \
    qcustomplot.cpp \
    presenter.cpp \
    polyline.cpp \
    parser.cpp \
    interface.cpp \
    commandstack.cpp \
    commandroutedel.cpp \
    commandrouteadd.cpp \
    commandpointdel.cpp \
    commandpointchange.cpp \
    commandpointadd.cpp \
    baseview.cpp \
    visitormanager.cpp

HEADERS += \
    structs.h \
    routesmodel.h \
    route.h \
    qcustomplot.h \
    presenter.h \
    polyline.h \
    parser.h \
    nonedittablecolumndelegate.h \
    interface.h \
    commandstack.h \
    commandroutedel.h \
    commandrouteadd.h \
    commandpointdel.h \
    commandpointchange.h \
    commandpointadd.h \
    command.h \
    baseview.h \
    visitor.h \
    visitormanager.h

FORMS += \
    interface.ui

DISTFILES +=
