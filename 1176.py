def fib(n):
    a, b = 0, 1
    for c in range(n): a, b = b, a+b
    return a
n = int(input())
for g in range(n):
    f = int(input())
    print('Fib({}) = {}'.format(f, fib(f)))
