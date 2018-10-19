#ifndef STRUCTS_H
#define STRUCTS_H

#include <QString>
#include <QDateTime>

struct Properties
{
    QString name;
    double distance;
    QDateTime date;
};

struct Erorrs
{
    QString notExistingFile = "Файл не существует.";
    QString cantOpenFile = "Не удалось открыть файл.";
    QString emptyRoute = "Маршрут пуст.";
};

#endif // STRUCTS_H
