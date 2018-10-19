/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QAction *openFile;
    QAction *addWayRoute;
    QAction *addPoint;
    QAction *delRoute;
    QAction *delPoint;
    QAction *addPolylineRoute;
    QAction *undo;
    QAction *redo;
    QWidget *centralWidget;
    QTableWidget *wayTable;
    QTableWidget *waypointTable;
    QTextEdit *polylineWay;
    QGroupBox *groupBox;
    QTextEdit *inputPolyline;
    QCustomPlot *altGraph;
    QTextEdit *wayInfo;
    QMenuBar *menuBar;
    QMenu *forFile;
    QMenu *forRoute;
    QMenu *forPoint;
    QMenu *menu;

    void setupUi(QMainWindow *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QStringLiteral("Interface"));
        Interface->resize(977, 700);
        openFile = new QAction(Interface);
        openFile->setObjectName(QStringLiteral("openFile"));
        addWayRoute = new QAction(Interface);
        addWayRoute->setObjectName(QStringLiteral("addWayRoute"));
        addPoint = new QAction(Interface);
        addPoint->setObjectName(QStringLiteral("addPoint"));
        delRoute = new QAction(Interface);
        delRoute->setObjectName(QStringLiteral("delRoute"));
        delPoint = new QAction(Interface);
        delPoint->setObjectName(QStringLiteral("delPoint"));
        addPolylineRoute = new QAction(Interface);
        addPolylineRoute->setObjectName(QStringLiteral("addPolylineRoute"));
        undo = new QAction(Interface);
        undo->setObjectName(QStringLiteral("undo"));
        redo = new QAction(Interface);
        redo->setObjectName(QStringLiteral("redo"));
        centralWidget = new QWidget(Interface);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        wayTable = new QTableWidget(centralWidget);
        if (wayTable->columnCount() < 3)
            wayTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        wayTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        wayTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        wayTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        wayTable->setObjectName(QStringLiteral("wayTable"));
        wayTable->setGeometry(QRect(10, 10, 421, 191));
        waypointTable = new QTableWidget(centralWidget);
        if (waypointTable->columnCount() < 3)
            waypointTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        waypointTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        waypointTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        waypointTable->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        waypointTable->setObjectName(QStringLiteral("waypointTable"));
        waypointTable->setGeometry(QRect(10, 210, 271, 381));
        polylineWay = new QTextEdit(centralWidget);
        polylineWay->setObjectName(QStringLiteral("polylineWay"));
        polylineWay->setGeometry(QRect(290, 210, 371, 381));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 600, 651, 71));
        inputPolyline = new QTextEdit(groupBox);
        inputPolyline->setObjectName(QStringLiteral("inputPolyline"));
        inputPolyline->setGeometry(QRect(0, 20, 651, 51));
        altGraph = new QCustomPlot(centralWidget);
        altGraph->setObjectName(QStringLiteral("altGraph"));
        altGraph->setGeometry(QRect(440, 10, 521, 191));
        wayInfo = new QTextEdit(centralWidget);
        wayInfo->setObjectName(QStringLiteral("wayInfo"));
        wayInfo->setGeometry(QRect(670, 210, 301, 461));
        Interface->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Interface);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 977, 22));
        forFile = new QMenu(menuBar);
        forFile->setObjectName(QStringLiteral("forFile"));
        forRoute = new QMenu(menuBar);
        forRoute->setObjectName(QStringLiteral("forRoute"));
        forPoint = new QMenu(menuBar);
        forPoint->setObjectName(QStringLiteral("forPoint"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        Interface->setMenuBar(menuBar);

        menuBar->addAction(forFile->menuAction());
        menuBar->addAction(forRoute->menuAction());
        menuBar->addAction(forPoint->menuAction());
        menuBar->addAction(menu->menuAction());
        forFile->addAction(openFile);
        forRoute->addAction(addWayRoute);
        forRoute->addAction(addPolylineRoute);
        forRoute->addAction(delRoute);
        forPoint->addAction(addPoint);
        forPoint->addAction(delPoint);
        menu->addAction(undo);
        menu->addAction(redo);

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QMainWindow *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "Interface", nullptr));
        openFile->setText(QApplication::translate("Interface", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#ifndef QT_NO_TOOLTIP
        openFile->setToolTip(QApplication::translate("Interface", "Cntrl + O", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        openFile->setShortcut(QApplication::translate("Interface", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        addWayRoute->setText(QApplication::translate("Interface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\274\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        addPoint->setText(QApplication::translate("Interface", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\321\207\320\272\321\203 \320\262 \320\274\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        delRoute->setText(QApplication::translate("Interface", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\274\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        delPoint->setText(QApplication::translate("Interface", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\320\276\321\207\320\272\321\203 \320\270\320\267 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260", nullptr));
        addPolylineRoute->setText(QApplication::translate("Interface", "\320\230\320\274\320\277\320\276\321\200\321\202 \320\274\320\260\321\200\321\210\321\200\321\203\321\202\320\260 \320\270\320\267 Polyline", nullptr));
        undo->setText(QApplication::translate("Interface", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        redo->setText(QApplication::translate("Interface", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = wayTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Interface", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = wayTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Interface", "\320\224\320\273\320\270\320\275\320\260 \320\277\321\203\321\202\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = wayTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Interface", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = waypointTable->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Interface", "lat", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = waypointTable->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Interface", "lon", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = waypointTable->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Interface", "alt", nullptr));
        groupBox->setTitle(QApplication::translate("Interface", "Polyline \320\264\320\273\321\217 \320\270\320\274\320\277\320\276\321\200\321\202\320\260", nullptr));
        forFile->setTitle(QApplication::translate("Interface", "\320\244\320\260\320\271\320\273", nullptr));
        forRoute->setTitle(QApplication::translate("Interface", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        forPoint->setTitle(QApplication::translate("Interface", "\320\242\320\276\321\207\320\272\320\260", nullptr));
        menu->setTitle(QApplication::translate("Interface", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
