for g in range(int(input())):
    n = int(input())
    lim = int(n / 2) + 1
    s = 0
    for i in range(1, lim):
        if n % i == 0: s += i
    if s == n: print(n, 'eh perfeito')
    else: print(n, 'nao eh perfeito')
