#include "extra-low-moon-mode.h"

uint8_t extra_low_moon_state(Event event, uint16_t arg) {
    if (event == EV_enter_state || event == EV_reenter_state) {
        set_level(arg);
    }

    if (event == EV_enter_state || event == EV_reenter_state ||
            event == EV_click1_hold_release ||
            event == EV_click2_hold_release ||
            event == EV_click3_hold_release) {
        // Any event will wake up the light, and it will remain awake as long as
        // the button is depressed, so we need to return to standby after any
        // event that gets handled, or we get into a weird state.
        go_to_standby = 1;
        power_off_on_standby = 0;
        tick_during_standby = 0;

        #ifdef USE_TINT_RAMPING
        // click3_hold_release still needs to be managed by tint-ramping, so
        // we want that to happen; all we're doing is making sure we reenter
        // standby when it's done.
        if (event != EV_click3_hold_release) {
            return MISCHIEF_MANAGED;
        }
        #endif

    } else if (event == EV_1click || event == EV_2clicks || event == EV_3clicks) {
        set_state(off_state, 0);
        return MISCHIEF_MANAGED;
    }

    return EVENT_NOT_HANDLED;
}
