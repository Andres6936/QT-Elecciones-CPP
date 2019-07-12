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

    // Fields Private

    Urn *urn = nullptr;

    QWidget *centralWidget = nullptr;
    QVBoxLayout *verticalLayout = nullptr;

    QFrame *frame = nullptr;
    QVBoxLayout *verticalLayout_2 = nullptr;

public:

    // Fields Public

    QFrame *panelCandidate = nullptr;
    QHBoxLayout *layoutCandidate = nullptr;

    PanelImage *panelImage = nullptr;

    PanelCandidate *panelFrank = nullptr;
    PanelCandidate *panelClaire = nullptr;
    PanelCandidate *panelBarack = nullptr;

    PanelUrn *panelUrn = nullptr;

    PanelExtension *panelExtension = nullptr;

    explicit InterfaceElections(QWidget *parent = nullptr);

    virtual ~InterfaceElections() override;

    void updateInterface();

    void addVoteToCandidate(Candidate *candidate);

    void clearUrn();

    void showDialogPercentageVotes(Candidate *candidate);

    unsigned int getTotalVotesUrn();

    void reqFuncOption1();

    void reqFuncOption2();
};

#endif // INTERFACE_ELECTIONS_H
