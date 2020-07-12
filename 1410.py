while True:
   a, d = [int(x) for x in input().split()]
   if a == d == 0: break
   da = min([int(x) for x in input().split()])
   dd = sorted([int(x) for x in input().split()])[1]
   if da < dd: print('Y')
   else: print('N')
