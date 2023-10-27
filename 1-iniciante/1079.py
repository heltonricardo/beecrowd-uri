n = int(input())
for i in range(n):
    a, b, c = [float(x) for x in input().split()]
    m = (a * 2 + b * 3 + c * 5) / 10
    print('{:.1f}'.format(m))
