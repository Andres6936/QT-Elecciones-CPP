#ifndef INTERFACE_ELECTIONS_H
#define INTERFACE_ELECTIONS_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QInputDialog>

#include "Urn.h"
#include "PanelUrn.hpp"
#include "PanelImage.hpp"
#include "PanelCandidate.hpp"
#include "PanelExtension.hpp"

class InterfaceElections : public QMainWindow
{
    Q_OBJECT

private:

    Urn *urn;

    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;

    QFrame *frame;
    QVBoxLayout *verticalLayout_2;

    PanelImage *panelImage;

    PanelCandidate *panelFrank;
    PanelCandidate *panelClaire;
    PanelCandidate *panelBarack;

    PanelUrn *panelUrn;

    PanelExtension *panelExtension;

public:

    explicit InterfaceElections(QWidget *parent = nullptr);

    virtual ~InterfaceElections();

    void updateInterface();

    void addVoteToCandidate(Candidate *candidate);

    void clearUrn();

    void showDialogPercentageVotes(Candidate *candidate);

    unsigned int getTotalVotesUrn();

    void reqFuncOption1();

    void reqFuncOption2();
};

#endif // INTERFACE_ELECTIONS_H
