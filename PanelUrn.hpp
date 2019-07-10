#ifndef PANELURN_HPP
#define PANELURN_HPP

#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>

class PanelUrn : public QFrame
{

private:

    QVBoxLayout *layout;

    QLabel *labelTotalVotos;

    QLabel *labelCostoPromedioCampanha;

public:

    PanelUrn(QWidget *parent);
};

#endif // PANELURN_HPP
