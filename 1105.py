while True:
   b, n = [int(x) for x in input().split()]
   if not b+n: break
   rm = [int(x) for x in input().split()]
   for g in range(n):
      d, c, v = [int(x) for x in input().split()]
      rm[d-1] -= v
      rm[c-1] += v
   r = 'S'
   for i in rm:
      if i < 0:
         r = 'N'
         break
   print(r)
