#include "routesmodel.h"

#include <string>
#include <stdio.h>

void RoutesModel::updatePolyline()
{
    polylines[currR].clear();
    polylines[currR] = Polyline::encode(tracks[currR]);
    emit letsFillPolyline(polylines.at(currR));
}

void RoutesModel::updateDistance()
{
    routes[currR].distance = QGeoPath(tracks[currR]).length()/1000.;
    emit letsUpdateDistance(routes[currR].distance, currR);
}

//void RoutesModel::updateInfo()
//{
//    emit letsClearInfo();
//    emit letsAddInfo(accept(new VisitorTurn(tracks.at(currR))));
//    emit letsAddInfo(accept(new VisitorSlopes(tracks.at(currR))));
//    emit letsAddInfo(accept(new VisitorSlopeTypes(tracks.at(currR))));
//}
//
//QString RoutesModel::accept(Visitor *v)
//{
//    return v->visit();
//}

RoutesModel::RoutesModel(QObject *parent) : QObject(parent)
{
    fileName = QStandardPaths::standardLocations(QStandardPaths::AppDataLocation).at(0);
    currR = 0;
    currT = 0;
}

RoutesModel::~RoutesModel()
{
    saveSession();
    routes.clear();
    tracks.clear();
    polylines.clear();
}

void RoutesModel::changeRouteName(const QString &name)
{
    if (name.length() != 0)
        routes[currR].name = name;
    else
        routes[currR].name = QString("route");

    emit letsUpdateRouteName(routes[currR].name);
}

void RoutesModel::addRoute(Route &r, int ind)
{
    currR = ind;
    routes.insert(currR, r.route);
    tracks.insert(currR, r.track);
    polylines.insert(currR, r.polyline);

    //updateInfo();
    emit letsAddRouteInTable(routes.at(currR), currR);
    emit letsFillPolyline(polylines.at(currR));
    emit letsFillTrackTable (tracks.at(currR));
    emit letsFillAltitudeGraph(tracks.at(currR));
    changeRouteName(routes.at(currR).name);
}

void RoutesModel::delRoute()
{
    routes.remove(currR);
    tracks.remove(currR);
    polylines.remove(currR);
    emit letsDelRouteFromTable(currR);

    int tmp = routes.size() - 1;
    if (tmp < 0)
    {
        currR = 0;
        emit letsClearInfo();
        emit letsFillPolyline(QString(""));
        emit letsFillTrackTable(QList<QGeoCoordinate>());
        emit letsFillAltitudeGraph(QList<QGeoCoordinate>());
    }
    else
    {
        if (currR >= tmp)
            currR = tmp;
        //updateInfo();
        emit letsFillPolyline(polylines.at(currR));
        emit letsFillTrackTable(tracks.at(currR));
        emit letsFillAltitudeGraph(tracks.at(currR));
    }
}

void RoutesModel::changePoint(QGeoCoordinate &point, const int ind)
{
    double distance = routes.at(currR).distance;
    QGeoCoordinate prev = tracks[currR][ind];
    tracks[currR].replace(ind, point);
    emit letsChangePointInTable(point, ind);
    if (prev.altitude() != point.altitude())
            emit letsFillAltitudeGraph(tracks.at(currR));
    else if ((prev.latitude() != point.latitude()) || (prev.longitude() != point.longitude()))
    {
        updatePolyline();
        updateDistance();
        if (distance != routes.at(currR).distance)
            emit letsFillAltitudeGraph(tracks.at(currR));
    }
    //updateInfo();
}

void RoutesModel::addPoint(QGeoCoordinate &point, const int ind)
{
    tracks[currR].insert(ind, point);
    updatePolyline();
    updateDistance();
    //updateInfo();
    emit letsAddPointInTable(point, ind);
    emit letsFillAltitudeGraph(tracks.at(currR));
}

void RoutesModel::delPoint(const int ind)
{
    tracks[currR].removeAt(ind);
    updatePolyline();
    updateDistance();
    //updateInfo();
    emit letsDelPointFromTable(ind);
    emit letsFillAltitudeGraph(tracks.at(currR));
}

void RoutesModel::setSelectedRoute(const int ind)
{
    currR = ind;
    //updateInfo();
    emit letsFillPolyline(polylines.at(currR));
    emit letsFillTrackTable(tracks.at(currR));
    emit letsFillAltitudeGraph(tracks.at(currR));
}

void RoutesModel::setSelectedPoint(const int ind)
{
    currT = ind;
}

Properties RoutesModel::getProperties()
{
    return Properties(routes[currR]);
}

QList<QGeoCoordinate> RoutesModel::getTrack()
{
    //return QList<QGeoCoordinate>(tracks[currR]);
    return tracks.at(currR);
}

QString RoutesModel::getPolyline()
{
    return QString(polylines[currR]);
}

QGeoCoordinate RoutesModel::getPoint()
{
    return QGeoCoordinate(tracks[currR][currT].latitude(),
                          tracks[currR][currT].longitude(),
                          tracks[currR][currT].altitude());
}

int RoutesModel::getCurrIndRoute()
{
    return currR;
}

int RoutesModel::getCurrIndPoint()
{
    return currT;
}

int RoutesModel::getRoutesCount()
{
    return routes.size();
}

#include <QDebug>

void RoutesModel::saveSession()
{
    FILE *f = fopen(fileName.toStdString().c_str(), "w");
    int end = tracks.size();
    fprintf(f, "%d\n", end);
    //qDebug() << "end = " << end;

    for (int i = 0; i < end; i++)
    {
        fprintf(f, "%s\n", routes[i].name.toStdString().c_str());
        fprintf(f, "%lf\n", routes[i].distance);
        fprintf(f, "%s\n", (routes[i].date.toString()).toStdString().c_str());

        int all = tracks.at(i).size();
        fprintf(f, "%d\n", all);        
        //qDebug() << "-----------------------------" << all;
        for (int j = 0; j < all; j++)
        {
            fprintf(f, "%lf %lf %lf\n", tracks.at(i).at(j).latitude(),
                                        tracks.at(i).at(j).longitude(),
                                        tracks.at(i).at(j).altitude());

            //qDebug() << "lat = " << (QString::number(tracks.at(i).at(j).latitude())).toStdString().c_str();
            //qDebug() << "lon = " << (QString::number(tracks.at(i).at(j).longitude())).toStdString().c_str();
            //qDebug() << "alt = " << (QString::number(tracks.at(i).at(j).altitude())).toStdString().c_str();
        }

        //qDebug() << "name = " << routes[i].name.toStdString().c_str();
        //qDebug() << "distance = " << (QString::number(routes[i].distance)).toStdString().c_str();
        //qDebug() << "date = " << (routes[i].date.toString()).toStdString().c_str();
    }

    fclose(f);
}

void RoutesModel::loadSession()
{
    FILE *f = fopen(fileName.toStdString().c_str(), "r");
    if (!f)
    {
        qDebug() << "return";
        return;
    }
    int end;
    fscanf(f, "%d\n", &end);
    //qDebug() << "end = " << end;

    for (int i = 0; i < end; i++)
    {
        Properties route;
        double distance;
        char name[50], date[50];
        fgets(name, 50, f);
        fscanf(f, "%lf\n", &distance);
        fgets(date, 50, f);

        QString n = QString(name);
        n.resize(n.size() - 1);
        route.name = n;
        route.distance = distance;
        n = QString(date);
        n.resize(n.size() - 1);
        route.date = QDateTime::fromString(n);
        routes.append(route);

        //qDebug() << "name = " << route.name;
        //qDebug() << "distance = " << route.distance;
        //qDebug() << "date = " << route.date;

        int all;
        double lat, lon, alt;
        QList<QGeoCoordinate> track;
        fscanf(f, "%d\n", &all);
        //qDebug() << "-----------------------------" << all;
        for (int i = 0; i < all; i++)
        {
            fscanf(f, "%lf", &lat);
            fscanf(f, "%lf", &lon);
            fscanf(f, "%lf\n", &alt);
            track.append(QGeoCoordinate(lat, lon, alt));

            //qDebug() << "lat = " << lat;
            //qDebug() << "lon = " << lon;
            //qDebug() << "alt = " << alt;
        }
        tracks.append(track);
        polylines.append(Polyline::encode(track));
        //qDebug() << "poly\n" << polylines.last();

        emit letsAddRouteInTable(routes.at(i), i);
        //qDebug() << "name = " << routes[i].name;
    }

    fclose(f);

    if (end)
    {
        emit letsFillPolyline(polylines.at(currR));
        emit letsFillTrackTable (tracks.at(currR));
        emit letsFillAltitudeGraph(tracks.at(currR));
    }
}
