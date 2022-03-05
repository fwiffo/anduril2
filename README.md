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

## My default config

 - Default to Advanced UI after factory reset
 - Enable autolock by default at 20 minutes
 - Disables party and tactical strobes and reduces default strobe brightness
 - Defaults to stepped ramping with 5 steps
 - Sets the default ramping floor (moonlight) to the lowest possible level
 - Sets manual ramp memory to middle brightness
 - Defaults AUX LEDs to battery mode and low brightness in OFF and LOCKOUT
 - Applies 0.5 gamma to tint autoramp curve to make middle levels cooler
