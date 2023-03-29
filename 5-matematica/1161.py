def fat(n):
    f = 1
    for i in range(2, n+1): f *= i
    return f
while True:
    try: x, y = [int(z) for z in input().split()]
    except EOFError: break
    if x != y: print(fat(x) + fat(y))
    else: print(fat(x) * 2)
