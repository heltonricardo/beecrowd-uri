cif = input()
tcif = len(cif)
for g in range(int(input())):
    frase = input()
    i = c = 0
    cript = []
    for k in frase:
        if k == ' ':
            cript.append(0)
            continue
        cript.append(ord(cif[c%tcif]))
        c += 1
    c = 0
    for pal in frase:
        if pal[0] in 'aeiou': continue
        for let in pal:
            print(chr(ord(let) + cript[c] - 97), end='')
            c += 1
