#include "visitormanager.h"
#include <QDir>

typedef Visitor* (*Builder)(QList<QGeoCoordinate> tr);

VisitorManager::VisitorManager(QList<QGeoCoordinate> track)
{
    QDir dir = QDir::current();
    dir.cd("..");
    dir.cd("..");
    dir.cd("lib.linux");
    dir.setFilter(QDir::Files);
    QFileInfoList fl = dir.entryInfoList();

    Visitor *visitor;
    for (int i = 0; i < fl.size(); i++)
    {
        QFileInfo fileInfo = fl.at(i);
        QString fname = fileInfo.fileName();

        if (QLibrary::isLibrary(fname) && fname.endsWith(".so"))
        {
            QLibrary lib(fname);
            if(!lib.load())
                continue;

            Builder builder = (Builder) lib.resolve("buildVisitor");
            if(builder)
            {
                visitor = builder(track);
                visitors.append(visitor);
            }
        }
    }
}

QVector<QString> VisitorManager::manage()
{
    QVector<QString> res;
    for (int i = 0; i < visitors.size(); i++)
        res.append(accept(visitors.at(i)));

    return res;
}

QString VisitorManager::accept(Visitor *v)
{
    QString res = v->visit();

    return res;
}
