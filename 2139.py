from datetime import datetime

d2 = datetime.strptime('2016-12-25', '%Y-%m-%d')

while True:
    try:
        e = str(input()).split(' ')
        m = int(e[0])
        d = int(e[1])
        data = '2016-' + '{:02}-'.format(m) + '{:02}'.format(d)
        d1 = datetime.strptime(data, '%Y-%m-%d')
        dias = (d2 - d1).days
        if dias < 0:
            print('Ja passou!')
        elif dias == 0:
            print('E natal!')
        elif dias == 1:
            print('E vespera de natal!')
        else:
            print('Faltam {} dias para o natal!'.format(dias))
    except EOFError:
        break
