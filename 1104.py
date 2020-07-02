while True:
   na, nb = [int(x) for x in input().split()]
   if na == 0 == nb: break
   a = set([int(x) for x in input().split()])
   b = set([int(x) for x in input().split()])
   print(len(a.difference(b)) if len(a) < len(b) else len(b.difference(a)))
