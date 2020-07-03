while True:
   n, b = [int(x) for x in input().split()]
   if n == b == 0: break
   p = [int(x) for x in input().split()]
   a = list(set([abs(a-b) for a in p for b in p]))
   b = [x for x in range(0, n+1)]
   print('Y' if a == b else 'N')
