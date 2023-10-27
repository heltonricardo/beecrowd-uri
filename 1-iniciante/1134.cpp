#include <iostream>

using namespace std;

int main(void) {
    int comb, gas = 0, diel = 0, alc = 0;

    while(cin >> comb && comb != 4) {
        if (comb == 1) ++alc;
        else if (comb == 2) ++gas;
        else if (comb == 3) ++diel;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << diel << endl;
    return 0;
}

