n = int(input())
if n % 2 != 0: n -= 1
for i in range(2, n+1, 2):
    print('{}^2 = {}'.format(i, i**2))
