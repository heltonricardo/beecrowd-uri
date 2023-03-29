def div(n):
   d, m = [], n // 2
   d.append(n)
   for i in range(m, 1, -1):
      if n % i == 0: d.append(i)
   return d

a, b, c, d = [int(w) for w in input().split()]
y = b * d
x = int((y/b*a) + (y/d*c))

c = True
while c:
   dx, dy = div(x), div(y)
   p = 0
   for e in dx:
      if e in dy:
         p = e
         break
   if p:
      x //= p
      y //= p
   else: c = False
print(x, y)
