def fat(n):
   if n <= 1: return 1
   else: return n * fat(n-1)
f = [fat(x) for x in range(8, 0, -1)]
n = int(input())
c = 0
for i in range(8):
   t = n // f[i]
   n -= t * f[i]
   c += t
print(c)
