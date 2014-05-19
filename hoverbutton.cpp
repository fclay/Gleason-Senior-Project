#include "hoverbutton.h"

HoverButton::HoverButton()
{
    this->setMouseTracking(true);
}

void HoverButton::enterEvent( QEvent* e )
{
    Q_EMIT hovered();

    // don't forget to forward the event
    QWidget::enterEvent( e );
}

