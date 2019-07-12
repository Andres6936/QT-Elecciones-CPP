#include "Include/PanelUrn.hpp"

PanelUrn::PanelUrn(QWidget *parent, Urn *nUrn) : QFrame(parent)
{
    this->setStyleSheet(QStringLiteral("border: none;"));
    this->setFrameShape(QFrame::StyledPanel);
    this->setFrameShadow(QFrame::Raised);

    urn = nUrn;

    layout = new QVBoxLayout(this);
    layout->setSpacing(6);
    layout->setContentsMargins(11, 11, 11, 11);

    labelTotalVotos = new QLabel(this);
    labelTotalVotos->setText("Total Votos: " + QString::number(urn->calcularTotalVotos()));

    labelCostoPromedioCampanha = new QLabel(this);
    labelCostoPromedioCampanha->setText("Costo Promedio Campaña: " + QString::number(urn->calcularCostoPromedioCampanha()));

    layout->addWidget(labelTotalVotos, 0, Qt::AlignHCenter);
    layout->addWidget(labelCostoPromedioCampanha, 0, Qt::AlignHCenter);
}

void PanelUrn::updateLabel()
{
    labelTotalVotos->setText("Total Votos: " + QString::number(urn->calcularTotalVotos()));
    labelCostoPromedioCampanha->setText("Costo Promedio Campaña: " + QString::number(urn->calcularCostoPromedioCampanha()));
}
