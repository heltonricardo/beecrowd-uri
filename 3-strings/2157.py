n = int(input())
for i in range(n):
    a, b = [int(x) for x in str(input()).split()]
    s = ''
    for j in range(a, b+1):
        s += str(j)
    print(s + s[::-1])
