n = int(input())
e = str(input()).split()
la = int(e[0])
lb = int(e[1])
if la <= n <= lb:
    e = str(input()).split()
    la = int(e[0])
    lb = int(e[1])
    if la <= n <= lb: print('possivel')
    else: print('impossivel')
else:
    input()
    print('impossivel')
