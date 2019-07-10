#include "Include/PanelCandidate.hpp"

PanelCandidate::PanelCandidate(QWidget *parent, Candidate *nCandidate) : QFrame(parent)
{
    this->setFrameShape(QFrame::StyledPanel);
    this->setFrameShadow(QFrame::Raised);

    candidate = nCandidate;

    layout = new QVBoxLayout(this);
    layout->setSpacing(6);
    layout->setContentsMargins(0, 0, 0, 0);

    labelImage = new QLabel(this);
    labelImage->setStyleSheet(QString("image: url(:/Data/" + candidate->getPathToImage() + ");"));

    labelNombre = new QLabel(this);
    labelNombre->setText("Name: " + candidate->getName());

    labelApellido = new QLabel(this);
    labelApellido->setText("Last Name: " + candidate->getApellido());

    labelEdad = new QLabel(this);
    labelEdad->setText("Age: " + QString::number(candidate->getEdad()));

    labelPartidoPolitico = new QLabel(this);
    labelPartidoPolitico->setText("Political Party: " + candidate->getPartidoPolitico());

    labelCostoCampanha = new QLabel(this);
    labelCostoCampanha->setText("Cost Campaign: " + QString::number(candidate->getCostoCampanha()));

    labelNumeroVotos = new QLabel(this);
    labelNumeroVotos->setText("Votes: " + QString::number(candidate->getVotos()));

    buttonPorcentajeVotos = new QPushButton(this);
    buttonPorcentajeVotos->setText("Percentage Votes");

    buttonVotar = new QPushButton(this);
    buttonVotar->setText("Vote");

    layout->addWidget(labelImage);
    layout->addWidget(labelNombre);
    layout->addWidget(labelApellido);
    layout->addWidget(labelEdad);
    layout->addWidget(labelPartidoPolitico);
    layout->addWidget(labelCostoCampanha);
    layout->addWidget(labelNumeroVotos);
    layout->addWidget(buttonPorcentajeVotos);
    layout->addWidget(buttonVotar);

    // Index: 0 -> labelImage
    layout->setStretch(0, 1);
}
