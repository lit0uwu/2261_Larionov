#!/usr/bin/env python3

n = int(input())
dresses = list(map(int, input().split()))
seen = set()
day = 0

while day < n:
    seen.add(dresses[day])
    day += 1
    if len(seen) == 3:
        break
print(day)
