while True:
    n = int(input())
    if n == 0: break
    x, y = [int(g) for g in str(input()).split()]
    for j in range(n):
        a, b = [int(g) for g in str(input()).split()]
        if a == x or b == y: print('divisa')
        else:
            if x < a:
                if y < b: print('NE')
                else: print('SE')
            else:
                if y < b: print('NO')
                else: print('SO')
