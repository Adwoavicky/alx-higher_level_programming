#!/usr/bin/python3
def remove_char_at(str, p):
    if p < 0:
        return str
    else:
        str = str[0:p] + str[p+1:]
        return str
