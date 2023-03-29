n = int(input())
e = [int(x) for x in input().split()]

while len(e) != 1:
   t = []
   for i in range(len(e)-1):
      if e[i] == e[i+1]: t.append(1)
      else: t.append(-1)
   e = t[:]
if t[0] == -1: print('branca')
else: print('preta')
