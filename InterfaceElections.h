#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class InterfaceElections : public QMainWindow
{
    Q_OBJECT

public:

    explicit InterfaceElections(QWidget *parent = nullptr);

    ~InterfaceElections();

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
