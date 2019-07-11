#ifndef PANELCANDIDATE_HPP
#define PANELCANDIDATE_HPP

#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

#include "Candidate.h"

class PanelCandidate : public QFrame
{

    Q_OBJECT

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

    PanelCandidate(QWidget *nParent, Candidate *nCandidate);

    virtual ~PanelCandidate();

private slots:

    void handleButtonPressed();
};

#endif // PANELCANDIDATE_HPP
