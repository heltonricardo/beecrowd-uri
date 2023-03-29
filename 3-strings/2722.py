for i in range(int(input())):
    a = str(input())
    b = str(input())
    p = True
    for j in range(0, len(a), 2):
        if j != len(a) - 2: print(a[j]+a[j+1]+b[j]+b[j+1], end='')
        else: print(a[j:]+b[j:])
