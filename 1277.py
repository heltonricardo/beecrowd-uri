for g in range(int(input())):
   x = False
   n = int(input())
   e = input().split()
   h = input().split()
   for i, f in enumerate(h):
      p = f.count('P')
      m = f.count('M')
      t = len(f) - m
      if len(f) != m: t = len(f) - m
      else: t = 100
      c = p * 100 / t
      if (c < 75):
         if x: print(end=' ')
         print(e[i], end='')
         x = True
   print()
