#ifndef PANELURN_HPP
#define PANELURN_HPP

#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>

#include "Urn.h"

class PanelUrn : public QFrame
{

private:

    Urn *urn;

    QVBoxLayout *layout;

    QLabel *labelTotalVotos;

    QLabel *labelCostoPromedioCampanha;

public:

    PanelUrn(QWidget *parent, Urn *nUrn);

    void updateLabel();
};

#endif // PANELURN_HPP
