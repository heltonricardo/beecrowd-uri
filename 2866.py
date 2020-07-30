for i in range(int(input())):
    e = str(input())
    p = ''
    for j in e:
        if j.islower(): p += j
    print(p[::-1])
