a = [int(t) for t in input().split()]
for v in a:
    if v < 0:
        print(v)
        break
else:
    print("Отрицательных чисел нет")
