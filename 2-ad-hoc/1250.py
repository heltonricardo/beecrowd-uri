q = int(input())
for p in range(q):
    s = int(input())
    a = [int(x) for x in str(input()).split()]
    m = str(input())
    f = 0
    for i in range(s):
        if m[i] == 'S' and a[i] <= 2:
            f += 1
        elif m[i] == 'J' and a[i] > 2:
            f += 1
    print(f)
