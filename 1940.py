j, r = [int(x) for x in str(input()).split()]
e = [int(x) for x in str(input()).split()]
v = []
for i in range(j): v.append(0)
for i in range(len(e)):
    m = i % j
    v[i % j] += e[i]
print(len(v) - v[::-1].index(max(v)))
