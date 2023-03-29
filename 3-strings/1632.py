n = int(input())
for i in range(n):
    e = str(input())
    v = 1
    for j in e:
        if j in 'AaEeIiOoSs': v *= 3
        else: v *= 2
    print(v)
