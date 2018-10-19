#ifndef BASEVIEW_H
#define BASEVIEW_H

#include <QMainWindow>
#include <QGeoCoordinate>
#include <QTableWidget>
#include <QTextEdit>

#include "structs.h"

class BaseView : public QMainWindow
{
    Q_OBJECT

public:
    BaseView(QWidget *parent = nullptr);

signals:
    void letsSetSelectedRoute(int ind);
    void letsSetSelectedPoint(int ind);
    void letsUpdateRouteName(const QString &name);
    void letsOpenFile();
    void letsAddRoute(QString polyline = "");
    void letsDelRoute();
    void letsAddPoint();
    void letsDelPoint();
    void letsChangePoint(QGeoCoordinate point);
    void letsUndo();
    void letsRedo();

public slots:    
    virtual void addInfo(const QString &info) = 0;
    virtual void clearInfo() = 0;

    virtual void addInRouteTable(const Properties &route, const int ind) = 0;
    virtual void delFromRouteTable(const int ind) = 0;

    virtual void addInTrackTable(const QGeoCoordinate &point, const int ind) = 0;
    virtual void delFromTrackTable(const int ind) = 0;
    virtual void changePointInTable(const QGeoCoordinate &point, const int ind) = 0;

    virtual void setPolyline(const QString &polyline) = 0;
    virtual void updateDistance(const double &distance, const int ind) = 0;
    virtual void updateTrackTable(const QList<QGeoCoordinate> &track) = 0;
    virtual void updateAltitudeGraph(const QVector<double> &altitudes, const QVector<double> &points) = 0;
    virtual void showError(const QString msg) = 0;

    virtual QString getOpenFileName() = 0;
};

#endif // BASEVIEW_H
