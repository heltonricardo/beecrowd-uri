c = e = qc = qe = 0
for g in range(int(input())):
    m, t = input().split()
    if m == 'chuva':
        if c > 0:
            c -= 1
            e += 1
        else:
            qc += 1
            e += 1
    if t == 'chuva':
        if e > 0:
            e -= 1
            c += 1
        else:
            qe += 1
            c += 1
print(qc, qe)
