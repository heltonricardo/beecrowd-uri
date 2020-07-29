n = int(input())
m = int(input())
v = []
for i in range(m):
    v.append(int(input()))
q = 0
for i in range(1, n+1):
    if not i in v: q += 1
print(q)
