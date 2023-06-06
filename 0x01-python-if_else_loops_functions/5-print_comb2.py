#!/usr/bin/python3
for i in range(ord('z'), ord('a') - 1, -1):
    print(chr(i), end='')
    if i % 2 == 0:
        i -= 1
    else:
        i += 1
