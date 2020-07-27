def ep(n):
    if n == 0: return False
    elif n == 1: return False
    elif n == 2: return True
    elif n == 3: return True
    elif n == 4: return False
    elif n == 5: return True
    elif n == 6: return False
    elif n == 7: return True
    elif n == 8: return False
    elif n == 9: return False
    t = int(n ** (1 / 2) + 2)
    p = True
    for i in range(2, t):
        if n % i == 0:
            p = False
            break
    return p

while True:
    try:
        n = int(input())
        if ep(n):
            ns = str(n)
            s = True
            for i in range(len(ns)):
                if not ep(int(ns[i])):
                    s = False
                    break
            print('Super' if s else 'Primo')
        else: print('Nada')
    except EOFError: break
