q = int(input())
for p in range(q):
    n = int(input())
    t = int(n ** (1 / 2) + 2)
    p = True if n != 0 else False
    for i in range(2, t):
        if n % i == 0:
            p = False
            break
    if n == 2: print('Prime')
    else: print('Prime' if p else 'Not Prime')
