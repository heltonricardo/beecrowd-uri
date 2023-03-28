for g in range(int(input())):
   n = int(input())
   v = [int(x) for x in input().split()]
   i = 1
   t = 0
   while i <= n:
      while v[i-1] != i:
         ind = v.index(i)
         v[ind], v[ind-1] = v[ind-1], v[ind]
         t += 1
      i += 1
   print('Optimal train swapping takes {} swaps.'.format(t))
