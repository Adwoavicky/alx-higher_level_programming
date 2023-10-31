#!/usr/bin/python3
def uppercase(str):
    for h in str:
        if ord("a") <= ord(h) <= ord("z"):
            h = chr(ord(h) - 32)
            print("{:s}".format(h), end="")
        print()
