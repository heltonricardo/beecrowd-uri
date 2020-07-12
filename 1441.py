def hr(n):
    if n % 2 == 0: return int(n // 2)
    else: return 3 * n + 1
while True:
    n = int(input())
    if n == 0: break
    m = n
    while n != 1:
        if m < n: m = n
        n = hr(n)
    print(m)
