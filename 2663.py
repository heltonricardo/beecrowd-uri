n = int(input())
q = int(input())
v = []
for i in range(n):
    v.append(int(input()))
v.sort(reverse=True)
h = v[q - 1:].count(v[q - 1]) - 1
print(q + h)
