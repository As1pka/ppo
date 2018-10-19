#ifndef INTERFACE_H
#define INTERFACE_H

#include "presenter.h"
#include "baseview.h"

namespace Ui { class Interface; }

class Interface : public BaseView
{
    Q_OBJECT
    Ui::Interface *ui;
    QVector<double> findMinMax(const QVector<double> &vec);

public:
    explicit Interface(QWidget *parent = 0);
    ~Interface();

    QString getOpenFileName();
public slots:    
    void addInfo(const QString &info) override;
    void clearInfo() override;

    void addInRouteTable(const Properties &route, const int ind) override;
    void delFromRouteTable(const int ind) override;

    void addInTrackTable(const QGeoCoordinate &point, const int ind) override;
    void delFromTrackTable(const int ind) override;
    void changePointInTable(const QGeoCoordinate &point, const int ind) override;

    void setPolyline(const QString &polyline) override;
    void updateDistance(const double &distance, const int ind) override;
    void updateTrackTable(const QList<QGeoCoordinate> &track) override;
    void updateAltitudeGraph(const QVector<double> &altitudes, const QVector<double> &points) override;
    void showError(const QString msg) override;

private slots:
    void onOpenFileTriggered();
    void onAddRouteTriggered();
    void onPolylineImportTriggered();
    void onDelRouteTriggered();
    void onAddPointTriggered();
    void onDelPointTriggered();
    void onUndoTriggered();
    void onRedoTriggered();
    void onRouteClicked(const QModelIndex &index);
    void onTrackClicked(const QModelIndex &index);
    void trackChanged(QTableWidgetItem *item);
    void routeNameChanged(QTableWidgetItem *item);
};

#endif // INTERFACE_H
