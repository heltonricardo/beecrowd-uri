q = int(input())
for p in range(q):
    e = [int(x) for x in str(input()).split()]
    e.pop(0)
    m = sum(e) / len(e)
    q = 0
    for i in e:
        if i > m: q += 1
    print('{:.3f}%'.format(100 * q / len(e)))
