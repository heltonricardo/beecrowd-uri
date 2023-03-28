while True:
    try:
        e = str(input()).split()
        n = int(e[1])
        c = True
        for i in range(n):
            s = str(input())
            if (s[s.find(' ') + 1:]).count('0') == 0:
                print(s[:s.find(' ')])
                c = False
                for j in range(i + 1, n): input()
                break
        if c: print('Pizza antes de FdI')
    except EOFError: break
