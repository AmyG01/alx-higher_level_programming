#!/usr/bin/python3
def print_square(size):
    if type(size) != int:
        raise TypeError("size must be an integer")
    elif size < 0:
        raise ValueError("size must be >= 0")
    elif type(size) == float:
        raise TypeError("size must be an integer")
    for i in range(0, size):
        for j in range(size):
            print("#", end= '')
        print('')
