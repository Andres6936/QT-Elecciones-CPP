#include "Include/PanelExtension.hpp"

PanelExtension::PanelExtension(QWidget *parent) : QFrame(parent)
{
    this->setFrameShape(QFrame::StyledPanel);
    this->setFrameShadow(QFrame::Raised);

    layout = new QHBoxLayout(this);
    layout->setSpacing(6);
    layout->setContentsMargins(11, 11, 11, 11);

    buttonVaciarUrna = new QPushButton(this);
    buttonVaciarUrna->setText("Vaciar Urna");
    buttonVaciarUrna->setCursor(QCursor(Qt::PointingHandCursor));
    buttonVaciarUrna->setStyleSheet(QLatin1String("border-radius: 5px;\n"
                                                  "background-color: rgb( 246, 34, 23 );\n"
                                                  "color: white;"));

    buttonOpcion1 = new QPushButton(this);
    buttonOpcion1->setText("Opción 1");
    buttonOpcion1->setCursor(QCursor(Qt::PointingHandCursor));
    buttonOpcion1->setStyleSheet(QLatin1String("border-radius: 5px;\n"
                                               "background-color: rgb( 21, 137, 255 );\n"
                                               "color: white;"));

    buttonOpcion2 = new QPushButton(this);
    buttonOpcion2->setText("Opción 2");
    buttonOpcion2->setCursor(QCursor(Qt::PointingHandCursor));
    buttonOpcion2->setStyleSheet(QLatin1String("border-radius: 5px;\n"
                                               "background-color: rgb( 21, 137, 255 );\n"
                                               "color: white;"));

    layout->addWidget(buttonVaciarUrna);
    layout->addWidget(buttonOpcion1);
    layout->addWidget(buttonOpcion2);
}
