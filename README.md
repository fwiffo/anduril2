# anduril2

Fork of ToyKeeper's Anduril 2 flashlight firmware

[Launchpad repository](https://code.launchpad.net/~toykeeper/flashlight-firmware/anduril2)

## New configuration options

Adds DEFAULT\_BIKING\_LEVEL for configuring the starting brightness for the
bike strobe.

Adds CUSTOM\_AUTORAMP\_CURVE to tweak the behavior of tint-autoramp. Makes it
possible to do something like adding a floor or ceiling to the autoramp tint,
or apply a curve that makes the middle levels warmer or cooler. Includes a
script to generate a simple gamma curve.

Adds THERM\_AUTOCALIBRATE\_TEMP config option for temperature to assume when
autocalibrating the temperature sensor on factory reset (the area near my
computer is warmer than the default 21 C).

## Extra-low moonlight mode

Set USE\_EXTRA\_MOON\_CONFIG to enable an experimental "extra-low" moonlight
option in the misc-config menu. When enabled, moonlight mode sets the light to
the lowest available brightness, then enters low-power standby mode (as if the
light was off) while leaving the LED channel enabled. Low-power mode can't be
entered until the button is released, so the light initially comes on at the
normal lowest brightness level, then drops when the button is released.

For dual-channel lights, this produces a brightness level per-LED similar to
single-channel lights, though it's flickery and variable. Brightness will drop
with battery level, and will stop working entirely at some point. Results will
vary by emitter.

In extra-low moonlight, the light is not in ramp mode, so most ramp-mode actions
are not available. Single click turns off, and click-hold is a momentary
"normal" moonlight. Tint ramping or channel switching is available with 3H as
usual. Also, it's not possible to enter standby while the button is depressed,
so extra-low moonlight doesn't work in momentary mode or lockout mode. Ramping
to floor from ramp mode is normal floor brightness, not standby.

## My default config

 - Default to Advanced UI after factory reset
 - Enable autolock by default at 20 minutes
 - Sets default autocalibrate temperature to 26 C
 - Disables party and tactical strobes and reduces default strobe brightness
 - Defaults to stepped ramping with 5 steps
 - Sets the default ramping floor (moonlight) to the lowest possible level
 - Disables ramp after moonlight
 - Sets manual ramp memory to middle brightness
 - Defaults AUX LEDs to battery mode and low brightness in OFF and LOCKOUT
 - Applies 0.5 gamma to tint autoramp curve to make middle levels cooler
 - Sets PWM curve for tint-ramping lights to include 0
 - Enables extra-low moonlight mode option for tint-ramping lights
