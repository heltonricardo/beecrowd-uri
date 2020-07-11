while True:
    n = int(input())
    if n == 0: break
    lis = str(input())
    m = lis.count('0')
    j = n - m
    print('Mary won {} times and John won {} times'.format(m, j))
