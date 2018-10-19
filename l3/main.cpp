#include "interface.h"
#include <QApplication>

#include <QDebug>
#include <QLibrary>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Interface w;
    w.show();

    Presenter pr(&w);

    /*QLibrary lib("Slopesd");
    if( !lib.load() ) {
            qDebug() << "Loading failed!";
            return 1;
        }

    typedef void ( *Counter )( const char* const );
        Counter counter = ( Counter ) lib.resolve( "slopesCounter" );
        if( counter ) {
            counter( "Hellooooo!" );
            //qDebug() << a
        }
        */

    return a.exec();
}
