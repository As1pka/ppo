#include <QFileDialog>

#include "presenter.h"

void Presenter::manageVisitors()
{
    VisitorManager *manager = new VisitorManager(model->getTrack());
    //QList<QGeoCoordinate> tmp = model->getTrack();
    //manager = new VisitorManager(tmp);
    QVector<QString> info = manager->manage();
    bv->clearInfo();
    for (int i = 0; i < info.size(); i++)
        bv->addInfo(info.at(i));
    delete manager;
}

Presenter::Presenter(BaseView *baseView, QObject *parent) : QObject(parent)
{
    bv = baseView;
    model = new RoutesModel();

    connect(bv, &BaseView::letsUpdateRouteName,  this, &Presenter::updateRouteName);

    connect(bv, &BaseView::letsSetSelectedRoute, this, &Presenter::setSelectedRoute);
    connect(bv, &BaseView::letsOpenFile,         this, &Presenter::openGpxFile);
    connect(bv, &BaseView::letsAddRoute,         this, &Presenter::addRoute);
    connect(bv, &BaseView::letsDelRoute,         this, &Presenter::delRoute);

    connect(bv, &BaseView::letsSetSelectedPoint, this, &Presenter::setSelectedPoint);
    connect(bv, &BaseView::letsChangePoint,      this, &Presenter::changePoint);
    connect(bv, &BaseView::letsAddPoint,         this, &Presenter::addPoint);
    connect(bv, &BaseView::letsDelPoint,         this, &Presenter::delPoint);

    connect(bv, &BaseView::letsRedo, this, &Presenter::redoTrigger);
    connect(bv, &BaseView::letsUndo, this, &Presenter::undoTrigger);

    connect(model, &RoutesModel::letsChangePointInTable, this, &Presenter::changePointInTable);
    connect(model, &RoutesModel::letsDelRouteFromTable,  this, &Presenter::delRouteFromTable);
    connect(model, &RoutesModel::letsDelPointFromTable,  this, &Presenter::delPointFromTable);
    connect(model, &RoutesModel::letsFillAltitudeGraph,  this, &Presenter::fillAltitudeGraph);
    connect(model, &RoutesModel::letsAddRouteInTable,    this, &Presenter::addRouteInTable);
    connect(model, &RoutesModel::letsAddPointInTable,    this, &Presenter::addPointInTable);
    connect(model, &RoutesModel::letsFillTrackTable,     this, &Presenter::fillTrackTable);
    connect(model, &RoutesModel::letsUpdateDistance,     this, &Presenter::updateDistance);
    connect(model, &RoutesModel::letsFillPolyline,       this, &Presenter::fillPolyline);    
    //connect(model, &RoutesModel::letsClearInfo,          this, &Presenter::clearInfo);
    //connect(model, &RoutesModel::letsAddInfo,            this, &Presenter::addInfo);

    connect(this, &Presenter::letsParse, &parser, &Parser::createNewWay);
    connect(&parser, &Parser::routeIsReady, this, &Presenter::saveNewRoute);

    model->loadSession();
}

Presenter::~Presenter()
{
    delete model;
}

void Presenter::openGpxFile()
{
    QString fileName = bv->getOpenFileName();
    QFile gpxFile(fileName);

    if (!gpxFile.exists())
        bv->showError(QString("Файл не существует."));
    else if (!gpxFile.open(QIODevice::ReadOnly))
        bv->showError(QString("Не удалось открыть файл."));
    else
        emit letsParse(gpxFile);
}

void Presenter::saveNewRoute(Route r)
{
    if (r.track.size() != 0)
    {
        r.polyline = Polyline::encode(r.track);
        commands.addCommand(new CommandRouteAdd(model, r));
    }
    else if (r.polyline.size() != 0)
    {
        r.track = Polyline::decode(r.polyline);
        r.route.distance = QGeoPath(r.track).length()/1000.;
        commands.addCommand(new CommandRouteAdd(model, r));
    }
    else
        bv->showError(QString("Маршрут пуст."));
}

void Presenter::addRoute(QString polyline)
{
    QDateTime dt;
    Route r;
    r.route.date = dt.currentDateTime();
    r.route.distance = 0;
    r.route.name = QString("route");
    if (polyline != "")
        r.polyline = polyline;
    else
        r.track.append(QGeoCoordinate(0, 0, 0));

    saveNewRoute(r);
}

void Presenter::delRoute()
{
    if (model->getRoutesCount())
        commands.addCommand(new CommandRouteDel(model));
}

void Presenter::setSelectedRoute(int ind)
{
    model->setSelectedRoute(ind);
    manageVisitors();
}

void Presenter::setSelectedPoint(int ind)
{
    model->setSelectedPoint(ind);
}

void Presenter::updateRouteName(const QString &name)
{
    model->changeRouteName(name);
}

void Presenter::updateDistance(const double &distance, const int ind)
{
    bv->updateDistance(distance, ind);
}

void Presenter::delRouteFromTable(const int ind)
{
    bv->delFromRouteTable(ind);
}

void Presenter::delPointFromTable(const int ind)
{
    bv->delFromTrackTable(ind);
}

void Presenter::addRouteInTable(const Properties &route, const int ind)
{
    bv->addInRouteTable(route, ind);
    manageVisitors();
}

void Presenter::addPointInTable(const QGeoCoordinate &point, const int ind)
{
    bv->addInTrackTable(point, ind);
    manageVisitors();
}

void Presenter::changePointInTable(const QGeoCoordinate &point, const int ind)
{
    bv->changePointInTable(point, ind);
    manageVisitors();
}

void Presenter::fillAltitudeGraph(const QList<QGeoCoordinate> &track)
{
    int flag = 0;
    QVector<double> altitudes, points;
    if (track.size() > 1)
    {
        altitudes = {track.at(0).altitude()};
        points = {0.};
        QList<QGeoCoordinate> tmp;
        tmp.append(track.at(0));
        int end = track.size();
        for (int i = 1; i < end; i++)
        {
            tmp.append(track.at(i));
            altitudes.append(track.at(i).altitude());
            points.append(points.last() + QGeoPath(tmp).length()/1000.);
            tmp.pop_front();
            if (points.last() != 0)
                flag = 1;
        }
    }

    if (!flag)
        altitudes.clear();

    bv->updateAltitudeGraph(altitudes, points);
}

void Presenter::fillTrackTable(const QList<QGeoCoordinate> &track)
{
    bv->updateTrackTable(track);
}

void Presenter::fillPolyline(const QString &polyline)
{
    bv->setPolyline(polyline);
}

void Presenter::addInfo(const QString &info)
{
    bv->addInfo(info);
}

void Presenter::clearInfo()
{
    bv->clearInfo();
}

void Presenter::addPoint()
{
    if (model->getRoutesCount())
        commands.addCommand(new CommandPointAdd(model, QGeoCoordinate(0, 0, 0)));
}

void Presenter::delPoint()
{
    if (model->getRoutesCount())
        commands.addCommand(new CommandPointDel(model));
}

void Presenter::changePoint(QGeoCoordinate point)
{
    commands.addCommand(new CommandPointChange(model, point));
}

void Presenter::redoTrigger()
{
    commands.redo();
}

void Presenter::undoTrigger()
{
    commands.undo();
}
