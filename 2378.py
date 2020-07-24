n, c = [int(x) for x in input().split()]
t = 0
r = 'N'
for g in range(n):
   s, e = [int(x) for x in input().split()]
   t = t - s + e
   if t > c: r = 'S'
print(r)
