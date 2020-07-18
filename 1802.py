por = [int(x) for x in input().split()][1:]
mat = [int(x) for x in input().split()][1:]
qui = [int(x) for x in input().split()][1:]
fis = [int(x) for x in input().split()][1:]
bio = [int(x) for x in input().split()][1:]
k = int(input())
v = set()
for a in por:
   for b in mat:
      for c in qui:
         for d in fis:
            for e in bio: v.add(tuple([a, b, c, d, e]))
print(sum(sorted([sum(i) for i in v], reverse=True)[:k]))
