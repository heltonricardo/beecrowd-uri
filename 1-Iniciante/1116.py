n = int(input())
for i in range(n):
    x, y = [int(z) for z in input().split()]
    if y != 0: print('{:.1f}'.format(x / y))
    else: print('divisao impossivel')
