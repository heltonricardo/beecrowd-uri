n = int(input())
for i in range(n):
    e = [int(x) for x in str(input()).split()]
    a = e[0]
    b = e[1]
    print('{} cm2'.format(int((a * b) / 2)))
