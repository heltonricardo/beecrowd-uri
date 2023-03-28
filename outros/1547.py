n = int(input())
for i in range(n):
    e = [int(x) for x in str(input()).split()]
    qt = e[0]
    s = e[1]
    e = [int(x) for x in str(input()).split()]
    d = ind = 999
    for j in range(qt):
        if d > abs(s - e[j]):
            d = abs(s - e[j])
            ind = j
    print(ind + 1)
