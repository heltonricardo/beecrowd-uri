while True:
    n = int(input())
    if n == 0: break
    for i in range(n):
        p = int(input())
        if p % 2 == 0: print((p * 2) - 2)
        else: print((p * 2) - 1)
