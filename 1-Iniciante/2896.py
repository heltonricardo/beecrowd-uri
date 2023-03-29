n = int(input())
for i in range(n):
    e = str(input()).split()
    a = int(e[0])
    b = int(e[1])
    x = int(a // b) + a - (int(a // b) * b)
    print(x)
