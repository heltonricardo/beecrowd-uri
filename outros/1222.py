from math import ceil
while True:
   try: n, l, c = [int(x) for x in input().split()]
   except: break
   e = [len(x) for x in input().split()]
   car = i = 0
   par = 1
   while i < n:
      car += e[i] 
      if i == len(e)-1: break
      if car + 1 + e[i+1] > c:
         par += 1
         car = 0
      else: car += 1
      i += 1
   print(ceil(par / l))
