#ifndef PRESENTER_H
#define PRESENTER_H

#include <QObject>
#include <QStack>

#include "baseview.h"
#include "routesmodel.h"
#include "parser.h"
#include "polyline.h"
#include "commandrouteadd.h"
#include "commandroutedel.h"
#include "commandpointadd.h"
#include "commandpointdel.h"
#include "commandpointchange.h"
#include "commandstack.h"
#include "visitormanager.h"

class Presenter : public QObject
{
    Q_OBJECT
    BaseView *bv;
    Parser parser;
    CommandStack commands;
    RoutesModel *model;
    VisitorManager *manager;
    void manageVisitors();

public:
    explicit Presenter(BaseView *baseView, QObject *parent = nullptr);
    ~Presenter();

signals:
    void letsAddInRouteTable(const Properties &route, const int ind);
    void letsDelFromRouteTable(const int ind);

    void letsAddInTrackTable(const QGeoCoordinate &point, const int ind);
    void letsDelFromTrackTable(const int ind);
    void letsChangePointInTable(const QGeoCoordinate &point, const int ind);

    void letsSetPolyline(const QString &polyline);
    void letsUpdateDistance(const double &distance, const int ind);
    void letsUpdateTrackTable(const QList<QGeoCoordinate> &track);
    void letsUpdateAltitudesGraph(const QVector<double> &altitudes, const QVector<double> &points);
    void letsShowError(QString msg);

    void letsAddCommand(Command *c);
    void letsRedo();
    void letsUndo();

    void letsParse(QFile &gpxFile);

public slots:
    void openGpxFile();
    void saveNewRoute(Route r);
    void addRoute(QString polyline);
    void delRoute();
    void setSelectedRoute(int ind);
    void setSelectedPoint(int ind);
    void updateRouteName(const QString &name);
    void updateDistance(const double &distance, const int ind);

    void delRouteFromTable(const int ind);
    void delPointFromTable(const int ind);
    void addRouteInTable(const Properties &route, const int ind);
    void addPointInTable(const QGeoCoordinate &point, const int ind);
    void changePointInTable(const QGeoCoordinate &point, const int ind);
    void fillAltitudeGraph(const QList<QGeoCoordinate> &track);
    void fillTrackTable(const QList<QGeoCoordinate> &track);
    void fillPolyline(const QString &polyline);

    void addInfo(const QString &info);
    void clearInfo();

    void addPoint();
    void delPoint();
    void changePoint(QGeoCoordinate point);

    void redoTrigger();
    void undoTrigger();
};

#endif // PRESENTER_H
