#ifndef PANELCANDIDATE_HPP
#define PANELCANDIDATE_HPP

#include <QFrame>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

#include "Candidate.h"

class PanelCandidate : public QFrame
{

private:

    Candidate *candidate;

    QVBoxLayout *layout;

    QLabel *labelImage;

    QLabel *labelNombre;

    QLabel *labelApellido;

    QLabel *labelEdad;

    QLabel *labelPartidoPolitico;

    QLabel *labelCostoCampanha;

    QLabel *labelNumeroVotos;

    QPushButton *buttonPorcentajeVotos;

    QPushButton *buttonVotar;

public:

    PanelCandidate(QWidget *parent, Candidate *nCandidate);
};

#endif // PANELCANDIDATE_HPP
