for g in range(int(input())):
   t = int(input())
   v = [int(x) for x in input().split()]
   s = sorted(v, reverse=True)
   c = 0
   for i in range(t):
      if v[i] == s[i]: c += 1
   print(c)
