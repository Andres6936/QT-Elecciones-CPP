#ifndef PANELIMAGE_HPP
#define PANELIMAGE_HPP

#include <QFrame>
#include <QLabel>
#include <QVBoxLayout>

class PanelImage : public QFrame
{

private:

    QVBoxLayout *verticalLayout;

    QLabel *labelImage;

public:

    PanelImage(QWidget *parent);
};

#endif // PANELIMAGE_HPP
