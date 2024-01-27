/*
 * Copyright (c) 2024, Sanil Gupta <sanilg566@gmail.com>.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibGUI/KnobWidget.h>
#include <LibGUI/Painter.h>
#include <LibGfx/StylePainter.h>
#include <LibGfx/Palette.h>

REGISTER_WIDGET(GUI, KnobWidget);

namespace GUI {
void KnobWidget::paint_event(PaintEvent& event)
{
    Painter painter(*this);

    painter.add_clip_rect(event.rect());

    //Gfx::IntRect rect(10, 10, 100, 100);

    Gfx::StylePainter::paint_knob(painter, rect(), palette());
    painter.draw_rect(event.rect(), Gfx::Color::Black);
    painter.draw_rect(rect(), Gfx::Color::White);
}

Optional<UISize> KnobWidget::calculated_min_size() const
{
    return UISize(20, 20);
}

}
