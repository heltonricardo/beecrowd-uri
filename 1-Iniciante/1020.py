n = int(input())
h = int(n // 365)
n -= h * 365
m = int(n // 30)
n -= m * 30
print(h, 'ano(s)')
print(m, 'mes(es)')
print(n, 'dia(s)')
