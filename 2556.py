while True:
   try: input()
   except: break
   v = [int(x) for x in input().split()]
   v = sorted(v)
   t = len(v) // 2
   print(t, v[t]-v[t-1])
