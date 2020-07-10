while True:
    try:
        e = str(input()).replace(' ', '')
    except EOFError: break
    s = sorted(list(set(e)))
    i = 0
    while i < len(s):
        j = i
        while j < len(s):
            if j == len(s)-1:
                print('{}:{}'.format(s[i], s[j]), end='')
                i += len(s)
                break
            else:
                if ord(s[j])+1 == ord(s[j+1]):
                    j += 1
                else:
                    print('{}:{}'.format(s[i], s[j]), end=', ')
                    i = j + 1
                    break
    print()
