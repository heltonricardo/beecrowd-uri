while True:
    try: lista = input().split(" ")
    except EOFError: break
    val1 = int(lista[0]) 
    val2 = int(lista[1]) 
    Mofiz = int(val1 ^ val2) 
    print(Mofiz)
