while True:
    try:
        j = str(input())
    except EOFError: break
    r = j[:j.find('+')]
    j = j[j.find('+')+1:]
    l = j[:j.find('=')]
    j = j[j.find('=')+1:]
    if 'R' in r: print(int(j)-int(l))
    elif 'L' in l: print(int(j)-int(r))
    else: print(int(r)+int(l))
