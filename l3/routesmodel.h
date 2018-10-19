#ifndef ROUTESMODEL_H
#define ROUTESMODEL_H

#include <QObject>
#include <QStandardPaths>

#include "polyline.h"
#include "structs.h"
#include "route.h"
//#include "visitorturn.h"
//#include "visitorslopes.h"
//#include "visitorslopestypes.h"

class RoutesModel : public QObject
{
    Q_OBJECT
    QVector<Properties> routes;
    QVector<QList<QGeoCoordinate>> tracks;
    QVector<QString> polylines;
    int currR, currT;
    QString fileName;
    void updatePolyline();
    void updateDistance();
    //void updateInfo();

public:
    explicit RoutesModel(QObject *parent = nullptr);
    ~RoutesModel();

    //QString accept(Visitor *v);

    void changeRouteName(const QString &name);

    void addRoute(Route &r, int ind);
    void delRoute();

    void changePoint(QGeoCoordinate &point, const int ind);
    void addPoint(QGeoCoordinate &point, const int ind);
    void delPoint(const int ind);

    void setSelectedRoute(const int ind);
    void setSelectedPoint(const int ind);

    QList<QGeoCoordinate> getTrack();
    Properties getProperties();
    QGeoCoordinate getPoint();
    QString getPolyline();
    int getCurrIndRoute();
    int getCurrIndPoint();
    int getRoutesCount();

    void saveSession();
    void loadSession();

signals:
    void letsAddInfo(const QString &info);
    void letsClearInfo();

    void letsAddRouteInTable(const Properties &route, const int ind);
    void letsDelRouteFromTable(const int ind);

    void letsUpdateRouteName(const QString &name);
    void letsFillTrackTable(const QList<QGeoCoordinate> &track);
    void letsFillAltitudeGraph(const QList<QGeoCoordinate> &track);
    void letsAddPointInTable(const QGeoCoordinate &point, const int ind);
    void letsDelPointFromTable(const int ind);
    void letsChangePointInTable(const QGeoCoordinate &point, const int ind);
    void letsFillPolyline(const QString &polyline);
    void letsUpdateDistance(const double &distance, const int ind);
};

#endif // ROUTESMODEL_H
