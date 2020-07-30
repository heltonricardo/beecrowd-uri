for g in range(int(input())):
    input()
    e = [int(x) for x in input().split()]
    v = [x for x in e if x % 2 != 0]
    maior = True
    while len(v) > 0:
        if maior:
            print(max(v), end='')
            v.remove(max(v))
            maior = False
            if len(v) > 0: print(end=' ')
        else:
            print(min(v), end='')
            v.remove(min(v))
            maior = True
            if len(v) > 0: print(end=' ')
    print()
