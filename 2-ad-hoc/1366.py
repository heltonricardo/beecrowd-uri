while True:
   n = int(input())
   if not n: break
   s = 0
   for i in range(n):
      s += [int(x) for x in input().split()][1] // 2
   print(s//2)
