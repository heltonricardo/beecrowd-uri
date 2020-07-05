def prim(n):
    if n == 0 or n == 1: return False
    lim = int(n ** 0.5) + 1
    for i in range(2, lim):
        if n % i == 0: return False
    return True

for g in range(int(input())):
    n = int(input())
    
    if not prim(n): print(n, 'nao eh primo')
    else: print(n, 'eh primo')
