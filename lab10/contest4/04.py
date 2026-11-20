#!/usr/bin/env python3

keys = ["1234567890", "qwertyuiop", "asdfghjkl", "zxcvbnm"]
n = int(input())
for _ in range(n):
    password = input()
    if all(any(char in row for char in password) for row in keys):
        print("strong")
    else:
        print("weak")
