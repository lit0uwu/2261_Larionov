#!/usr/bin/env python3

n = int(input())
a = list(map(int, input().split()))
a.sort(key=lambda x: abs(x) * 2 + (x > 0))
print(*a)
