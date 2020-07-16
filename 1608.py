for g in range(int(input())):
   d, i, b = [int(x) for x in input().split()]
   ind = [int(x) for x in input().split()]
   bolos = [0 for x in range(b)]
   for j in range(b):
      e = [int(x) for x in input().split()][1:]
      bolos[j] = 0
      for k in range(0, len(e), 2):
         bolos[j] += ind[e[k]] * e[k+1]
   print(d // min(bolos))
