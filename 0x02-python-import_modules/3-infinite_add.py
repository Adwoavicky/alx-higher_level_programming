#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    import math
    result = 0
    for k in sys.argv[1:]:
        result += int(k)
    print("{}".format(result))
