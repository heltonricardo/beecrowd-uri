while True:
   try: e = [c for c in input().strip().split('x')]
   except EOFError: break
   m = 0
   for t, j in enumerate(e):
      p = len(j)
      if not (t == 0 or t == len(e)-1): p //= 2
      if p > m: m = p
   print(m)
