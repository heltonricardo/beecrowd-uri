def p(c):
    print(c, end='')

while True:
    try:
        n = int(input())
        e = int(n / 3)
        d = n - e - 1
        for i in range(n):
            for j in range(n):
                if e <= i <= d and e <= j <= d:
                    if n % 2 != 0 and i == j == (n - 1) / 2: p(4)
                    else: p(1)
                elif i == j: p(2)
                elif i + j == n - 1: p(3)
                else: p(0)
            print()
        print()
    except EOFError: break
