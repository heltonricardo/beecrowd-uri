n = int(input())
for i in range(n):
    e = str(input())
    t1 = ''
    for j in e:
        if j.isalpha():
            t1 += chr(ord(j) + 3)
        else: t1 += j
    t1 = t1[::-1]
    m = int(len(t1) / 2)
    t3 = t1[:m]
    for j in range(m, len(t1)):
        t3 += chr(ord(t1[j]) - 1)
    print(t3)
