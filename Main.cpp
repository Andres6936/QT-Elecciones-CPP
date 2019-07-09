#include "InterfaceElections.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    InterfaceElections w;
    w.show();

    return app.exec();
}
