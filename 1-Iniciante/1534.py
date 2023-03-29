while True:
    try:
        n = int(input())
        m = n - 1
        for i in range(n):
            for j in range(n):
                if i + j == m: print(2, end='')
                elif i == j: print(1, end='')
                else: print(3, end='')
            print()
    except EOFError: break
