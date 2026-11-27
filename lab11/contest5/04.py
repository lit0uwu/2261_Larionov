#!/usr/bin/env python3

n, m = map(int, input().split())
a = []
for _ in range(n):
    a.append(list(map(int, input().split())))
for j in range(m):
    row = []
    for i in range(n):
        row.append(a[i][j])
    print(*row)
