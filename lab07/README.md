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

    otvet_bit = []

    for j in range(n):
        p = p * 2
        bit = p // q
        otvet_bit.append(str(bit))
        p = p % q

    print("0." + "".join(otvet_bit))
```

## Задача 3  
```python
t = int(input())

otvety = []
for _ in range(t):
    a, b, c, d, e, f, g, h = map(int, input().split())

    lev_ch = a * d + c * b
    lev_zn = b * d

    prav_ch = e * h + g * f
    prav_zn = f * h

    x = lev_ch * prav_zn
    y = prav_ch * lev_zn

    if x == y:
        otvety.append("0")
    elif x < y:
        otvety.append("-1")
    else:
        otvety.append("1")

print(" ".join(otvety))
```
