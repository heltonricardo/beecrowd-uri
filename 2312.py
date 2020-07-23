plac = []
for g in range(int(input())):
   tmp = []
   e = input().split()
   tmp.append(e[0])
   tmp.append(int(e[1]))
   tmp.append(int(e[2]))
   tmp.append(int(e[3]))
   plac.append(tmp)
plac = sorted(sorted(plac, key=lambda x: x[0]), key=lambda x: (x[1], x[2], x[3]), reverse=True) 
for n, o, p, b in plac: print(n, o, p, b)
