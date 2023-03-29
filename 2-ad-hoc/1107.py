while True:
   a, c = [int(x) for x in input().split()]
   if a == c == 0: break
   b = [int(x) for x in input().split()]
   m = a - b[0]
   for i in range(1, c):
      if b[i-1] > b[i]: m += b[i-1] - b[i]
   print(m)
