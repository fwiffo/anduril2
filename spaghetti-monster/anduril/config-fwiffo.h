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
#ifdef DEFAULT_BIKING_LEVEL
#undef DEFAULT_BIKING_LEVEL
#endif
#define STROBE_BRIGHTNESS RAMP_DISCRETE_CEIL / 3
#define DEFAULT_BIKING_LEVEL RAMP_DISCRETE_CEIL / 3

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

#ifdef CUSTOM_AUTORAMP_CURVE
#undef CUSTOM_AUTORAMP_CURVE
#endif
// 0.40 gamma, 1.00 alpha
#define CUSTOM_AUTORAMP_CURVE 0,28,37,43,48,53,57,61,64,67,70,73,75,78,80,82,84,86,88,90,92,94,96,97,99,101,102,104,105,107,108,110,111,113,114,115,117,118,119,120,122,123,124,125,126,127,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,149,150,151,152,153,154,155,155,156,157,158,159,160,160,161,162,163,164,164,165,166,167,167,168,169,170,170,171,172,173,173,174,175,175,176,177,177,178,179,179,180,181,182,182,183,183,184,185,185,186,187,187,188,189,189,190,190,191,192,192,193,194,194,195,195,196,197,197,198,198,199,199,200,201,201,202,202,203,203,204,205,205,206,206,207,207,208,208,209,209,210,211,211,212,212,213,213,214,214,215,215,216,216,217,217,218,218,219,219,220,220,221,221,222,222,223,223,224,224,225,225,226,226,227,227,228,228,229,229,230,230,230,231,231,232,232,233,233,234,234,235,235,235,236,236,237,237,238,238,239,239,240,240,240,241,241,242,242,243,243,243,244,244,245,245,246,246,246,247,247,248,248,248,249,249,250,250,251,251,251,252,252,253,253,253,254,254,255,255
