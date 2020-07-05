n = int(input())
for q in range(n):
    x, y = [int(z) for z in input().split()]
    x = x + 1 if x % 2 == 0 else x
    q = s = 0
    while q < y:
        s += x
        x += 2
        q += 1
    print(s)
