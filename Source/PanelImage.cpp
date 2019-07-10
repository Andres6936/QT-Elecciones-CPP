#include "Include/PanelImage.hpp"

PanelImage::PanelImage(QWidget *parent) : QFrame (parent)
{
    this->setObjectName(QStringLiteral("panelImage"));
    this->setMinimumSize(QSize(600, 118));
    this->setStyleSheet(QStringLiteral("border: none;"));
    this->setFrameShape(QFrame::StyledPanel);
    this->setFrameShadow(QFrame::Raised);

    verticalLayout = new QVBoxLayout(this);
    verticalLayout->setSpacing(0);
    verticalLayout->setObjectName(QStringLiteral("verticalLayoutImage"));
    verticalLayout->setContentsMargins(0, 0, 0, 0);

    labelImage = new QLabel(this);
    labelImage->setObjectName(QStringLiteral("labelImage"));
    labelImage->setStyleSheet(QStringLiteral("image: url(:/Data/Encabezado.jpg);"));

    verticalLayout->addWidget(labelImage);
}
