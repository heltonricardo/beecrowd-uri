from math import sqrt
while True:
   try: Xf, Yf, Xi, Yi, Vi, R1, R2 = [int(x) for x in input().split()]
   except: break
   r = R1 + R2
   d = sqrt(pow(Xf-Xi, 2) + pow(Yf-Yi, 2)) + 1.5*Vi
   if r >= d: print('Y')
   else: print('N')
