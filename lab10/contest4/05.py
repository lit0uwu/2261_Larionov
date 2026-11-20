#!/usr/bin/env python3

trump = input()
n = int(input())
ranks = "6 7 8 9 10 Jack Queen King Ace".split()
ans = []

for _ in range(n):
    a = input().split()
    b = input().split()
    win = (a[1] == b[1] and ranks.index(b[0]) > ranks.index(a[0])) or (b[1] == trump and a[1] != trump)
    ans.append("1" if win else "0")
print(*ans)
