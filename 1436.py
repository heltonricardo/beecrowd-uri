i = 1
for g in range(int(input())):
    e = str(input()).split()
    e.pop(0)
    f = int(len(e) // 2)
    print('Case {}: {}'.format(i, e[f]))
    i += 1
