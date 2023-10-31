#!/usr/bin/python3
for r in range(9):
    for s in range(r + 1, 10):
        if r * 10 + s < 89:
            print("{:d}{:d}".format(r, s), end=", ")
print("{:d}".format(89))
