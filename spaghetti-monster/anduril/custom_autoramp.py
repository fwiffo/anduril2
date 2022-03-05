#!/usr/bin/env python

def main(exp=0.5):
    exp = float(exp)
    steps = [ str(int(round(255 * (v/255) ** exp))) for v in range(256) ]
    print('#define CUSTOM_AUTORAMP_CURVE ' + ','.join(steps))

if __name__ == "__main__":
    import sys
    main(*sys.argv[1:])

