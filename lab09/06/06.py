#!/usr/bin/env python3

def gen(i):
    while(i != 1):
       yield i
       if(i % 2 == 0):
          i = i // 2
       else:
          i = 3 * i + 1
print(*gen(7))
