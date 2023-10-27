n = int(input())
h = int(n // 3600)
n -= h * 3600
m = int(n // 60)
n -= m * 60
print('{}:{}:{}'.format(h, m, n))
