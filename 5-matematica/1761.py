from math import tan
while True:
   try: a, b, c = [float(x) for x in input().split()]
   except: break
   x = (b * tan((a * 3.141592654) / 180.0) + c) * 5
   print('{:.2f}'.format(x))
