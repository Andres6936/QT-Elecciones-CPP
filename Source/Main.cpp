#include <QtWidgets/QApplication>

#include "Include/InterfaceElections.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    InterfaceElections window;
    window.show();

    return app.exec();
}
