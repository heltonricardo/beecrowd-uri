n = int(input())
for i in range(n):
    m = int(input())
    b = sorted((bin(m)[2:]).split('0'))
    print(len(b[-1]))
