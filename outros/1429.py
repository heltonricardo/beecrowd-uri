def fatorial(N, PARCIAL = 1):
    if (N <= 1): return PARCIAL
    else: return fatorial(N - 1, PARCIAL * N)

while True:
    n = str(input())
    if n == '0': break
    s = 0
    for c, i in enumerate(n): s += int(i) * fatorial(len(n)-c)
    print(s)
