while True:
    s = input().lower().split()
    if s[0] == '*': break
    tam = len(s)
    l = s[0][0]
    tau = True
    for i in range(1, tam):
        if s[i][0] != l:
            tau = False
            break
    print('Y' if tau else 'N')
