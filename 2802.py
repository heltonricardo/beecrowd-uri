def f(n):
    a = 1
    for i in range(2, n+1): a *= i
    return a

def c(n, p):
    return f(n) / (f(p) * f(n-p))

n = int(input())
print(int(c(n, 4) + c(n, 2) + 1))
