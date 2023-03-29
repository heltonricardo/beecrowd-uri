Cv, Ce, Cs, Fv, Fe, Fs = [int(x) for x in input().split()]
Cp = Cv * 3 + Ce
Fp = Fv * 3 + Fe
if Cp > Fp: print('C')
elif Cp < Fp: print('F')
else:
   if Cs > Fs: print('C')
   elif Cs < Fs: print('F')
   else: print('=')
