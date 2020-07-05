while True:
    n = int(input())
    if n == 0: break
    n = n+1 if n % 2 != 0 else n
    print(5 * n + 20)
