m = []
for i in range(4):
    m.append(str(input()))
v = []
for i in range(len(m[0])): 
    f = int(m[0][i]) * 1000
    f += int(m[1][i]) * 100
    f += int(m[2][i]) * 10
    f += int(m[3][i])
    v.append(f)
for i in range(1, len(v)-1):
    print(chr((v[0] * v[i] + v[-1]) % 257), end='')
print()
