for g in range(int(input())):
   h, d, g = [int(x) for x in input().split()]
   if 200 <= h <= 300 and 50 <= d and 150 <= g: print('Sim')
   else: print('Nao')
