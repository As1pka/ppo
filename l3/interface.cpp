#include <QMessageBox>

#include "interface.h"
#include "ui_interface.h"
#include "polyline.h"
#include "math.h"
#include "nonedittablecolumndelegate.h"

QVector<double> Interface::findMinMax(const QVector<double> &vec)
{
    double min = INT_MAX, max = INT_MIN;
    int end = vec.size();
    for (int i = 0; i < end; i++)
    {
        if (vec.at(i) < min)
            min = vec[i];
        if (vec.at(i) > max)
            max = vec[i];
    }

    return QVector<double>({min, max});
}

Interface::Interface(QWidget *parent) :
    BaseView(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
    ui->polylineWay->setReadOnly(true);
    ui->wayInfo->setReadOnly(true);
    ui->wayTable->setSelectionMode(QAbstractItemView::NoSelection);
    ui->wayTable->setItemDelegateForColumn(1, new NonEditTableColumnDelegate());
    ui->wayTable->setItemDelegateForColumn(2, new NonEditTableColumnDelegate());

    connect(ui->wayTable, &QTableWidget::clicked, this, &Interface::onRouteClicked);
    connect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);

    connect(ui->waypointTable, &QTableWidget::clicked, this, &Interface::onTrackClicked);
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);

    connect(ui->addPolylineRoute, &QAction::triggered, this, &Interface::onPolylineImportTriggered);
    connect(ui->addWayRoute,      &QAction::triggered, this, &Interface::onAddRouteTriggered);
    connect(ui->openFile,         &QAction::triggered, this, &Interface::onOpenFileTriggered);
    connect(ui->delRoute,         &QAction::triggered, this, &Interface::onDelRouteTriggered);
    connect(ui->addPoint,         &QAction::triggered, this, &Interface::onAddPointTriggered);
    connect(ui->delPoint,         &QAction::triggered, this, &Interface::onDelPointTriggered);
    connect(ui->undo,             &QAction::triggered, this, &Interface::onUndoTriggered);
    connect(ui->redo,             &QAction::triggered, this, &Interface::onRedoTriggered);
}

Interface::~Interface()
{
    delete ui;
}

void Interface::addInfo(const QString &info)
{
    QString tmp = ui->wayInfo->toPlainText();
    tmp.append(info);
    ui->wayInfo->setText(tmp);
    ui->wayInfo->update();
}

void Interface::clearInfo()
{
    ui->wayInfo->clear();
}

QString Interface::getOpenFileName()
{
    return QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.gpx");
}

void Interface::addInRouteTable(const Properties &route, const int ind)
{
    disconnect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
    ui->wayTable->insertRow(ind);
    ui->wayTable->setItem(ind, 0, new QTableWidgetItem(QString(route.name)));
    ui->wayTable->setItem(ind, 1, new QTableWidgetItem(QString::number(route.distance)));
    ui->wayTable->setItem(ind, 2, new QTableWidgetItem(route.date.toString(Qt::SystemLocaleShortDate)));
    ui->wayTable->resizeColumnsToContents();
    ui->wayTable->setCurrentIndex(ui->wayTable->model()->index(ind, 0));
    connect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
}

void Interface::delFromRouteTable(const int ind)
{
    disconnect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
    int all = ui->wayTable->rowCount() - 1;
    ui->wayTable->removeRow(ind);
    ui->wayTable->setRowCount(all);
    connect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
}

void Interface::addInTrackTable(const QGeoCoordinate &point, const int ind)
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    ui->waypointTable->insertRow(ind);
    ui->waypointTable->setItem(ind, 0, new QTableWidgetItem(QString::number(point.latitude())));
    ui->waypointTable->setItem(ind, 1, new QTableWidgetItem(QString::number(point.longitude())));
    ui->waypointTable->setItem(ind, 2, new QTableWidgetItem(QString::number(point.altitude())));
    ui->waypointTable->resizeColumnsToContents();
    ui->waypointTable->setCurrentIndex(ui->waypointTable->model()->index(ind, 0));
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::delFromTrackTable(const int ind)
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    ui->waypointTable->removeRow(ind);
    ui->waypointTable->setCurrentIndex(ui->waypointTable->model()->index(ind, 0));
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::changePointInTable(const QGeoCoordinate &point, const int ind)
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    ui->waypointTable->setItem(ind, 0, new QTableWidgetItem(QString::number(point.latitude())));
    ui->waypointTable->setItem(ind, 1, new QTableWidgetItem(QString::number(point.longitude())));
    ui->waypointTable->setItem(ind, 2, new QTableWidgetItem(QString::number(point.altitude())));
    ui->waypointTable->resizeColumnsToContents();
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::setPolyline(const QString &polyline)
{
    ui->polylineWay->clear();
    ui->polylineWay->setText(polyline);
    ui->polylineWay->update();
}

void Interface::updateDistance(const double &distance, const int ind)
{
    disconnect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
    ui->wayTable->setItem(ind, 1, new QTableWidgetItem(QString::number(distance)));
    connect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
}

void Interface::showError(const QString msg)
{
    QMessageBox::warning(this, "Ошибка", msg);
}

void Interface::updateTrackTable(const QList<QGeoCoordinate> &track)
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    int all = track.size();
    ui->waypointTable->setRowCount(all);
    for (int i = 0; i < all; i++)
    {
        ui->waypointTable->setItem(i, 0, new QTableWidgetItem(QString::number(track.at(i).latitude())));
        ui->waypointTable->setItem(i, 1, new QTableWidgetItem(QString::number(track.at(i).longitude())));
        ui->waypointTable->setItem(i, 2, new QTableWidgetItem(QString::number(track.at(i).altitude())));
    }
    ui->waypointTable->resizeColumnsToContents();
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::updateAltitudeGraph(const QVector<double> &altitudes, const QVector<double> &points)
{
    ui->altGraph->clearGraphs();
    ui->altGraph->clearGraphs();
    ui->altGraph->replot();
    if (altitudes.size() != 0)
    {
        QVector<double> altLimits = findMinMax(altitudes);
        if (altLimits.last() != 0)
        {
            QVector<double> pLimits = findMinMax(points);
            ui->altGraph->addGraph();
            ui->altGraph->graph(0)->setData(points, altitudes);
            ui->altGraph->xAxis->setLabel("p");
            ui->altGraph->xAxis->setRange(pLimits.first(), pLimits.last());
            ui->altGraph->yAxis->setLabel("altitude");
            ui->altGraph->yAxis->setRange(altLimits.first(), altLimits.last());
            ui->altGraph->graph(0)->setPen(QPen(Qt::black));
            ui->altGraph->replot();
        }
    }
}

void Interface::onOpenFileTriggered()
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    emit letsOpenFile();
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::onPolylineImportTriggered()
{
    emit letsAddRoute(QString(ui->inputPolyline->toPlainText()));
}

void Interface::onAddRouteTriggered()
{
    emit letsAddRoute();
}

void Interface::onDelRouteTriggered()
{
    emit letsDelRoute();
}

void Interface::onRouteClicked(const QModelIndex &index)
{
    emit letsSetSelectedRoute(index.row());
}

void Interface::onTrackClicked(const QModelIndex &index)
{
    emit letsSetSelectedPoint(index.row());
}

void Interface::onAddPointTriggered()
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    emit letsAddPoint();
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::onDelPointTriggered()
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    emit letsDelPoint();
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::onUndoTriggered()
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    emit letsUndo();
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::onRedoTriggered()
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    emit letsRedo();
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::trackChanged(QTableWidgetItem *item)
{
    disconnect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
    QGeoCoordinate point;
    if (item->column() == 0)
    {
        point.setLatitude(item->text().toDouble());
        point.setLongitude(ui->waypointTable->item(item->row(), 1)->text().toDouble());
        point.setAltitude(ui->waypointTable->item(item->row(), 2)->text().toDouble());
    }
    else if (item->column() == 1)
    {

        point.setLatitude(ui->waypointTable->item(item->row(), 0)->text().toDouble());
        point.setLongitude(item->text().toDouble());
        point.setAltitude(ui->waypointTable->item(item->row(), 2)->text().toDouble());
    }
    else if (item->column() == 2)
    {
        point.setLatitude(ui->waypointTable->item(item->row(), 0)->text().toDouble());
        point.setLongitude(ui->waypointTable->item(item->row(), 1)->text().toDouble());
        point.setAltitude(item->text().toDouble());
    }
    emit letsChangePoint(point);
    connect(ui->waypointTable, &QTableWidget::itemChanged, this, &Interface::trackChanged);
}

void Interface::routeNameChanged(QTableWidgetItem *item)
{
    connect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
    if (item->column() == 0)
        emit letsUpdateRouteName(item->text());
    disconnect(ui->wayTable, &QTableWidget::itemChanged, this, &Interface::routeNameChanged);
}
