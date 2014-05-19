#ifndef HOVERBUTTON_H
#define HOVERBUTTON_H

#include <QPushButton>
#include "ui_mainwindow.h"

class HoverButton : public QPushButton
{

    Q_OBJECT

public:
    HoverButton();

protected:
    virtual void enterEvent( QEvent* e );

signals:
    void hovered();


};

#endif // HOVERBUTTON_H
