#!/usr/bin/python3
import sys


def safe_print_integer_err(value):
    T_int = True
    try:
        print("{:d}".format(value))
    except Exception as e:
        print("Exception:", e, file=sys.stderr)
        T_int = False
    return T_int
