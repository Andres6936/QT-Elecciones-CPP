#ifndef PANELEXTENSION_HPP
#define PANELEXTENSION_HPP

#include <QFrame>
#include <QHBoxLayout>
#include <QPushButton>

class PanelExtension : public QFrame
{

private:

    QHBoxLayout *layout;

    QPushButton *buttonVaciarUrna;

    QPushButton *buttonOpcion1;

    QPushButton *buttonOpcion2;

public:

    PanelExtension(QWidget *parent);
};

#endif // PANELEXTENSION_HPP
