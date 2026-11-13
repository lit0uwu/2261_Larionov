#!/usr/bin/env python3

def every_other(seq):
    it = iter(seq)
    e = next(it, None)
    while(e != None):
        yield e
        e = next(it, None)
        e = next(it, None)
i = [1, 2, 3, 4, 5]
print(*every_other(i))
