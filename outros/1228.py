while True:
   try: n = int(input())
   except EOFError: break
   c = 0
   a = [int(x) for x in input().split()]
   b = [int(x) for x in input().split()]
   while a != b:
      for i in range(n):
         if a[i] != b[i]:
            t = b.index(a[i])
            p = b[t]
            b.remove(b[t])
            b.insert(i, p)
            c += abs(t-i)
            break
   print(c)
