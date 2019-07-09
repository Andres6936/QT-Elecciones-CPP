#include "InterfaceElections.h"
#include "ui_MainWindow.h"

InterfaceElections::InterfaceElections(QWidget *parent) : QMainWindow(parent)
{
    if (this->objectName().isEmpty())
    {
        this->setObjectName(QStringLiteral("MainWindow"));
    }

    this->resize(800, 600);
    this->setMinimumSize(QSize(800, 600));
    this->setStyleSheet(QLatin1String("border: 1px solid rgb( 240, 240, 240);\n"
                                      "border-radius: 5px;\n"
                                      "background-color: white;"));

    // ------

    centralWidget = new QWidget(parent);
    centralWidget->setObjectName(QStringLiteral("centralWidget"));

    verticalLayout = new QVBoxLayout(centralWidget);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

    // ------

    frame = new QFrame(centralWidget);
    frame->setObjectName(QStringLiteral("frame"));
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);

    verticalLayout_2 = new QVBoxLayout(frame);
    verticalLayout_2->setSpacing(6);
    verticalLayout_2->setContentsMargins(11, 11, 11, 11);
    verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
    verticalLayout_2->setContentsMargins(0, 0, 0, 0);

    // -----

    panelImage = new PanelImage(frame);

    verticalLayout_2->addWidget(panelImage);

    // -----

    verticalLayout->addWidget(frame);

    // ------

    this->setCentralWidget(centralWidget);
}

InterfaceElections::~InterfaceElections()
{

}
