while True:
   p, c = 0, []
   n, g = [int(x) for x in input().split()]
   for i in range(n):
      s, r = [int(x) for x in input().split()]
      if s-r > 0: p += 3
      else: c.append(r-s+1)
   c = sorted(c)
   for i, k in enumerate(c):
      if g >= k:
         g -= k
         p += 3
         c[i] = 101
      else: break
   p += c.count(1)
   print(p)
