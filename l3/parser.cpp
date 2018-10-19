#include "parser.h"

Parser::Parser(QObject *parent) : QObject(parent) { }

void Parser::createNewWay(QFile &gpxFile)
{
    Route newRoute;
    int nameFlag = 0;
    QXmlStreamReader gpx;
    gpx.setDevice(&gpxFile);
    QVector<QGeoCoordinate> firstEnd;
    while (!gpx.atEnd() && !gpx.hasError())
    {
        QXmlStreamReader::TokenType token = gpx.readNext();
        QString name = gpx.name().toString();
        if (token == QXmlStreamReader::StartElement)
        {
            if (name == "wpt")
                firstEnd.append(QGeoCoordinate(gpx.attributes().value("lat").toDouble(),
                                               gpx.attributes().value("lon").toDouble(), 0.));
            else if (name == "trkpt")
                newRoute.track.append(QGeoCoordinate(gpx.attributes().value("lat").toDouble(),
                                                     gpx.attributes().value("lon").toDouble(), 0.));
            else if (name == "trk")
                nameFlag = 1;
            else if (!nameFlag && name == "ele")
                    firstEnd.last().setAltitude(gpx.readElementText().toDouble());
            else if (nameFlag)
            {
                if (name == "ele")
                    newRoute.track.last().setAltitude(gpx.readElementText().toDouble());
                else if (name == "name")
                    newRoute.route.name.append(gpx.readElementText());
            }
        }
    }

    newRoute.track.prepend(firstEnd.first());
    newRoute.track.append (firstEnd.last());

    QFileInfo info(gpxFile);
    newRoute.route.date = info.metadataChangeTime();

    newRoute.route.distance = QGeoPath(newRoute.track).length()/1000.;

    emit routeIsReady(newRoute);
}
