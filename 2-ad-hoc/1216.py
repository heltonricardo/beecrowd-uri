n = 0
i = 0
while True:
    try:
        e = input()
        n += int(input())
        i += 1
    except EOFError:
        print('{:.1f}'.format(float(n / i)))
        break
