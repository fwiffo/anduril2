/*
 * config-fwiffo.h: Fwiffo's customizations to Anduril 2.
 *
 * Copyright (C) 2017 Selene Scriven
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// Factory reset to Advanced mode, not Simple
#ifdef SIMPLE_UI_ACTIVE
#undef SIMPLE_UI_ACTIVE
#endif
#define SIMPLE_UI_ACTIVE 0

// Default autolock on
#ifdef DEFAULT_AUTOLOCK_TIME
#undef DEFAULT_AUTOLOCK_TIME
#endif
#define DEFAULT_AUTOLOCK_TIME 20

// Disable nasty strobes
#undef USE_PARTY_STROBE_MODE
#undef USE_TACTICAL_STROBE_MODE
#ifdef STROBE_BRIGHTNESS
#undef STROBE_BRIGHTNESS
#endif
#define STROBE_BRIGHTNESS RAMP_DISCRETE_CEIL / 3

// Default ramp style: 0 = smooth, 1 = stepped
#ifdef RAMP_STYLE
#undef RAMP_STYLE
#endif
#define RAMP_STYLE 1

// Dimmest possible moonlight, and 5 ramp steps
#ifdef RAMP_DISCRETE_FLOOR
#undef RAMP_DISCRETE_FLOOR
#endif
#ifdef RAMP_SMOOTH_FLOOR
#undef RAMP_SMOOTH_FLOOR
#endif
#ifdef RAMP_DISCRETE_STEPS
#undef RAMP_DISCRETE_STEPS
#endif
#define RAMP_DISCRETE_FLOOR 1
#define RAMP_SMOOTH_FLOOR 1
#define RAMP_DISCRETE_STEPS 5

// Use manual memory by default
#ifdef DEFAULT_MANUAL_MEMORY
#undef DEFAULT_MANUAL_MEMORY
#endif
#define DEFAULT_MANUAL_MEMORY RAMP_DISCRETE_CEIL / 2

// Don't ramp after moonlight by default
#ifdef DEFAULT_DONT_RAMP_AFTER_MOON
#undef DEFAULT_DONT_RAMP_AFTER_MOON
#endif
#define DEFAULT_DONT_RAMP_AFTER_MOON 1

// AUX LEDs
#ifdef RGB_LED_OFF_DEFAULT
#undef RGB_LED_OFF_DEFAULT
#endif
#ifdef RGB_LED_LOCKOUT_DEFAULT
#undef RGB_LED_LOCKOUT_DEFAULT
#endif
#define RGB_LED_OFF_DEFAULT 0x19  // low, voltage
#define RGB_LED_LOCKOUT_DEFAULT 0x19  // low, voltage
