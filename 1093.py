from math import ceil
while True:
   ev1, ev2, at, d = [int(x) for x in input().split()]
   if ev1 == ev2 == at == d == 0: break
   p1 = at / 6
   c = ceil(ev2 / d)
   y = c * p1
   print(p1, y)
