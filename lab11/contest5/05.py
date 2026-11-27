#!/usr/bin/env python3

import sys
from math import sqrt

data = sys.stdin.read().split()
w, h, s = int(data[0]), int(data[1]), int(data[2])
n = int(data[3])

trees = []
for i in range(n):
    x = int(data[4 + 2 * i])
    y = int(data[5 + 2 * i])
    k = x // s
    if k % 2 == 0:
        trees.append((k, y, x))
    else:
        trees.append((k, -y, x))
trees.sort()

total = 0.0
px, py = trees[0][2], abs(trees[0][1])
for k, y, x in trees[1:]:
    y = abs(y)
    total += sqrt((x - px) ** 2 + (y - py) ** 2)
    px, py = x, y

print(total)
