#!/usr/bin/env python

def main(exp=0.5, mult=1.0):
    exp = float(exp)
    mult = float(mult)
    steps = [ int(round(mult * 255 * (v/255) ** exp)) for v in range(256) ]
    print('// %.2f gamma, %.2f alpha' % (exp, mult))
    print(
        '#define CUSTOM_AUTORAMP_CURVE ' +
        ','.join(str(min(s, 255)) for s in steps))


if __name__ == "__main__":
    import sys
    main(*sys.argv[1:])
