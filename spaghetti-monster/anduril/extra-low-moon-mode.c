#include "extra-low-moon-mode.h"

uint8_t extra_low_moon_state(Event event, uint16_t arg) {
    if (event == EV_enter_state || event == EV_reenter_state) {
        set_level(arg);
        go_to_standby = 1;
        skip_power_off_on_standby = 1;
    } else if (event == EV_click1_hold_release) {
        // Any button action will wake up the light, so we have to go back to
        // standby or we get in a weird state. This acts like a momentary
        // normal-moon mode, which is cool.
        go_to_standby = 1;
        skip_power_off_on_standby = 1;
        return MISCHIEF_MANAGED;
    } else if (event == EV_click1_release) {
        set_state(off_state, 0);
        return MISCHIEF_MANAGED;
    }
    return EVENT_NOT_HANDLED;
}
