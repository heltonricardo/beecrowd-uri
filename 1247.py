while True:
    try:
        D, VF, VG = [int(x) for x in str(input()).split()]
    except EOFError: break

    PF = 12
    H = ((PF*PF)+(D*D))**(0.5)
    TF = PF/VF;
    TG = (H/VG);

    print('S' if TG <= TF else 'N')
