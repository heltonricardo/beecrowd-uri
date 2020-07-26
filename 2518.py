from math import sqrt
while True:
   try: n = int(input())
   except: break
   h, c, l = [int(x) for x in input().split()]
   a = sqrt(h**2 + c**2) * n * l
   print('{:.4f}'.format(a/10000))
