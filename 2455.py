e = [int(x) for x in str(input()).split()]
p1 = e[0]
c1 = e[1]
p2 = e[2]
c2 = e[3]
if p1 * c1 > p2 * c2: print(-1)
elif p1 * c1 < p2 * c2: print(1)
else: print(0)
