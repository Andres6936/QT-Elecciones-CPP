#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "PanelImage.hpp"

class InterfaceElections : public QMainWindow
{
    Q_OBJECT

private:

    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;

    QFrame *frame;
    QVBoxLayout *verticalLayout_2;

    PanelImage *panelImage;

public:

    explicit InterfaceElections(QWidget *parent = nullptr);

    ~InterfaceElections();
};

#endif // MAINWINDOW_H
