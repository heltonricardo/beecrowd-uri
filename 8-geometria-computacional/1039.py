from math import sqrt
while True:
   try: R1, X1, Y1, R2, X2, Y2 = [int(x) for x in input().split()]
   except: break
   D = sqrt((X1-X2)**2 + (Y1-Y2)**2)
   if R1 >= D+R2: print('RICO')
   else: print('MORTO')
