## olymp3  

## Задача 1

```python
n = int(input())

klassov = (n + 24) // 25
menshiy_klass = n // klassov

print(klassov, menshiy_klass)
```

## Задача 2

```python
t = int(input())

for i in range(t):
    n = int(input())
    p, q = map(int, input().split())

    bits = []

    for j in range(n):
        p = p * 2
        b = p // q
        bits.append(str(b))
        p = p % q

    print("0." + "".join(bits))
```
