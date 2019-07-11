#include "Include/InterfaceElections.h"

InterfaceElections::InterfaceElections(QWidget *parent) : QMainWindow(parent)
{
    if (this->objectName().isEmpty())
    {
        this->setObjectName(QStringLiteral("InterfaceElections"));
    }

    this->resize(800, 600);
    this->setMinimumSize(QSize(800, 600));
    this->setStyleSheet(QLatin1String("border: 1px solid rgb( 240, 240, 240);\n"
                                      "border-radius: 5px;\n"
                                      "background-color: white;"));

    // ------

    urn = new Urn();

    // ------

    centralWidget = new QWidget(parent);
    centralWidget->setObjectName(QStringLiteral("centralWidget"));

    verticalLayout = new QVBoxLayout(centralWidget);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);

    // ------

    frame = new QFrame(centralWidget);
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);

    verticalLayout_2 = new QVBoxLayout(frame);
    verticalLayout_2->setSpacing(6);
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);

    // -----

    panelImage = new PanelImage(frame);

    verticalLayout_2->addWidget(panelImage);

    // -----

    QFrame *panelCandidate = new QFrame(frame);
    panelCandidate->setStyleSheet(QStringLiteral("QFrame { border: none; }"));
    panelCandidate->setFrameShape(QFrame::StyledPanel);
    panelCandidate->setFrameShadow(QFrame::Raised);
    panelCandidate->setLineWidth(0);

    QHBoxLayout *layoutCandidate = new QHBoxLayout(panelCandidate);
    layoutCandidate->setSpacing(6);
    layoutCandidate->setContentsMargins(11, 11, 11, 11);

    panelFrank = new PanelCandidate(panelCandidate, urn->getCandidate1());
    panelClaire = new PanelCandidate(panelCandidate, urn->getCandidate2());
    panelBarack = new PanelCandidate(panelCandidate, urn->getCandidate3());

    layoutCandidate->addWidget(panelFrank);
    layoutCandidate->addWidget(panelClaire);
    layoutCandidate->addWidget(panelBarack);

    verticalLayout_2->addWidget(panelCandidate);

    // -----

    panelUrn = new PanelUrn(frame);

    verticalLayout_2->addWidget(panelUrn);

    // -----

    panelExtension = new PanelExtension(frame);

    verticalLayout_2->addWidget(panelExtension);

    // -----
    
    verticalLayout_2->setStretch(0, 2);
    verticalLayout_2->setStretch(1, 6);
    verticalLayout_2->setStretch(2, 1);
    verticalLayout_2->setStretch(3, 1);

    // -----

    verticalLayout->addWidget(frame);

    // ------

    this->setCentralWidget(centralWidget);
}

InterfaceElections::~InterfaceElections()
{

}

void InterfaceElections::addVoteToCandidate(Candidate *candidate)
{
    QStringList choices;

    choices.append("Television"); choices.append("Radio"); choices.append("Internet");

    bool userHasMadeAChoice = false;

    QString choice = QInputDialog::getItem(this, "Influence",
                                           "What media influenced you most"
                                           " to vote for this candidate?", choices,
                                           0, false, &userHasMadeAChoice);

    if (userHasMadeAChoice && !choice.isEmpty())
    {
        if(choice == "Television")
        {
            urn->ingresarVotoTelevision(*candidate);
        }
        else if(choice == "Radio")
        {
            urn->ingresarVotoRadio(*candidate);
        }
        else if(choice == "Internet")
        {
            urn->ingresarVotoInernet(*candidate);
        }
    }
}
