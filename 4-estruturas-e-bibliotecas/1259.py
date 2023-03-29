p = []
i = []
for g in range(int(input())):
    n = int(input())
    if n % 2 == 0: p.append(n)
    else: i.append(n)
p.sort()
i.sort(reverse=True)
for j in p: print(j)
for j in i: print(j)
