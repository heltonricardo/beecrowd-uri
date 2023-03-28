n = int(input())
for i in range(n):
    x, y = [int(x) for x in input().split()]
    if x > y: x, y = y, x
    s = 0
    for j in range(x+1, y):
        if j % 2 != 0: s += j
    print(s)
