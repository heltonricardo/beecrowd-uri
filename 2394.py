c = []
for g in range([int(x) for x in input().split()][0]):
   c.append(sum([int(x) for x in input().split()]))
print(c.index(min(c))+1)
