n = int(input())
v = [int(x) for x in  input().split()]
d = []
for i in range(1, n):
    d.append(v[i]-v[i-1])
e = 1
for i in range(1, n-1):
    if d[i] != d[i-1]:
        e += 1
print(e)
