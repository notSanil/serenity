/*
 * Copyright (c) 2024, Sanil Gupta <sanilg566@gmail.com>.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibGUI/Widget.h>
namespace GUI {

class KnobWidget : public Widget {
    C_OBJECT(KnobWidget);

public:
    ~KnobWidget() = default;
    virtual Optional<UISize> calculated_min_size() const override;

    protected:
        virtual void paint_event(PaintEvent&) override;

    private:
        KnobWidget()
        {
            set_min_size({ SpecialDimension::Shrink });
            set_preferred_size({ SpecialDimension::Shrink });
        };

};
}
