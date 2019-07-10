#include "PanelUrn.hpp"

PanelUrn::PanelUrn(QWidget *parent) : QFrame(parent)
{
    this->setStyleSheet(QStringLiteral("border: none;"));
    this->setFrameShape(QFrame::StyledPanel);
    this->setFrameShadow(QFrame::Raised);

    layout = new QVBoxLayout(this);
    layout->setSpacing(6);
    layout->setContentsMargins(11, 11, 11, 11);

    labelTotalVotos = new QLabel(this);
    labelTotalVotos->setText("Total Votos: 0");

    labelCostoPromedioCampanha = new QLabel(this);
    labelCostoPromedioCampanha->setText("Costo Promedio Campaña: 0");

    layout->addWidget(labelTotalVotos, 0, Qt::AlignHCenter);
    layout->addWidget(labelCostoPromedioCampanha, 0, Qt::AlignHCenter);
}
