﻿#include "Include/PanelCandidate.hpp"
#include "Include/InterfaceElections.h"

PanelCandidate::PanelCandidate(QWidget *nParent, Candidate *nCandidate) : QFrame(nParent)
{
    this->setFrameShape(QFrame::StyledPanel);
    this->setFrameShadow(QFrame::Raised);
    this->setStyleSheet(QLatin1String("QLabel { border : none; margin: 1px 3px; }\n"
                                      "QLabel#labelImage"
                                      "{border: 1px solid rgb( 240, 240, 240 ); }"));
    candidate = nCandidate;

    layout = new QVBoxLayout(this);
    layout->setSpacing(2);
    layout->setContentsMargins(0, 0, 0, 0);

    labelImage = new QLabel(this);
    labelImage->setObjectName("labelImage");
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
    labelNumeroVotos->setStyleSheet(QStringLiteral("color : rgb( 246, 34, 23 );"));
    labelNumeroVotos->setAlignment(Qt::AlignCenter);

    buttonPorcentajeVotos = new QPushButton(this);
    buttonPorcentajeVotos->setText("Percentage Votes");
    buttonPorcentajeVotos->setCursor(QCursor(Qt::PointingHandCursor));

    // Connect button signal to appropriate slot
    connect(buttonPorcentajeVotos, SIGNAL(pressed()), this, SLOT(handleButtonPressed()));

    buttonVotar = new QPushButton(this);
    buttonVotar->setText("Vote");
    buttonVotar->setCursor(QCursor(Qt::PointingHandCursor));

    // Connect button signal to appropriate slot
    connect(buttonVotar, SIGNAL(pressed()), this, SLOT(handleButtonPressed()));

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

PanelCandidate::~PanelCandidate()
{

}

void PanelCandidate::updateLabel()
{
    labelCostoCampanha->setText("Cost Campaign: " + QString::number(candidate->getCostoCampanha()));
    labelNumeroVotos->setText("Votes: " + QString::number(candidate->getVotos()));
}

void PanelCandidate::handleButtonPressed()
{
    // What is the button pressed?
    // Get pointer to the button pressed
    QPushButton *buttonPressed = qobject_cast<QPushButton*>(sender());

    if(buttonPressed == buttonVotar)
    {
        dynamic_cast<InterfaceElections*>(this->parentWidget())->addVoteToCandidate(candidate);
    }
}
