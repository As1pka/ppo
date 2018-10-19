#ifndef PARSER_H
#define PARSER_H

#include <QObject>
#include <QFile>
#include <QFileInfo>
#include <QXmlStreamReader>

#include "route.h"

class Parser : public QObject
{
    Q_OBJECT
public:
    explicit Parser(QObject *parent = nullptr);

signals:
    void routeIsReady(Route route);

public slots:
    void createNewWay(QFile &gpxFile);
};

#endif // PARSER_H
