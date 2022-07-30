#pragma once

#include "displayapp/screens/Screen.h"
#include <lvgl/lvgl.h>

namespace Pinetime {
    namespace Applications {
        namespace Screens {
            class HelloWorld : public Screen {
            public:
                HelloWorld(DisplayApp* app);
                ~HelloWorld() override;
            };
        }
    }
}
