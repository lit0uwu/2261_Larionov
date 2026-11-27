#!/usr/bin/env python3

word = input()
n = int(input())
d = {}
for _ in range(n):
    key = input()
    d[key] = input()
for i in range(1, len(word)):
    left = word[:i]
    right = word[i:]
    if left in d and right in d:
        print(d[left] + d[right])
        break
