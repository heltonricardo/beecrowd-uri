from math import sqrt

tipo = {
'fire':  {'dmg': 200, 'n1': 20, 'n2': 30, 'n3': 50},
'water': {'dmg': 300, 'n1': 10, 'n2': 25, 'n3': 40},
'earth': {'dmg': 400, 'n1': 25, 'n2': 55, 'n3': 70},
'air':   {'dmg': 100, 'n1': 18, 'n2': 38, 'n3': 60}}

for g in range(int(input())):
   w, h, x0, y0 = [int(x) for x in input().split()]
   e = input().split()
   n, cx, cy = [int(x) for x in e[1:]]

   enum = tipo[e[0]]
   dmg = enum['dmg']
   ns = 'n' + str(n)
   r = enum[ns]
   proc = True

   if x0 <= cx <= x0+w and y0 <= cy <= y0+h: proc = False

   if proc:
      c1 = (y0-cy)**2
      c2 = (y0+h-cy)**2
      for px in range(x0, x0+w+1):
         d1 = sqrt((px-cx)**2 + c1)
         d2 = sqrt((px-cx)**2 + c2)
         if r >= d1 or r >= d2:
            proc = False
            break
   if proc:
      c1 = (x0-cx)**2
      c2 = (x0+w-cx)**2
      for py in range(y0, y0+h+1):
         d1 = sqrt(c1 + (py-cy)**2)
         d2 = sqrt(c2 + (py-cy)**2)
         if r >= d1 or r >= d2:
            proc = False
            break

   if proc: print(0)
   else: print(dmg)
