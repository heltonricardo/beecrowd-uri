q = int(input())
for p in range(q):
    n = int(input())
    e = set([int(x) for x in str(input()).split()])
    print(len(e))
