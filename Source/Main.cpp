#include "Include/InterfaceElections.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    InterfaceElections window;
    window.show();

    return app.exec();
}
