#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    x = sorted(a_dictionary)
    for k in x:
        print("{}: {}".format(k, a_dictionary[k]))
