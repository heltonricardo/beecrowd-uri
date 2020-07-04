l, n = [int(x) for x in input().split()]
for i in range(1, n+1):
    print(i, end='')
    if i % l != 0: print(end=' ')
    else: print()
