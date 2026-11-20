#!/usr/bin/env python3

s = input()
print(s.replace(max(set(s), key=s.count), ""))
