import string

n = 1
for letter in string.ascii_lowercase:
    for k in range(100):
        globals()[letter + str(k)] = n
        n += 1

print(a0, a99, b0, z98, z99)
print(n - 1)

