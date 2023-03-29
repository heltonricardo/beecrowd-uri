lim = int(input())
e = input().split()
n1, n2 = int(e[0]), int(e[2])
if e[1] == '*': r = n1*n2
else: r = n1+n2
if r <= lim: print('OK')
else: print('OVERFLOW')
