#include <iostream>

using namespace std;

int main(void)
{
    int par = 0, impar = 0, pos = 0, neg = 0, numero, i;

    for (i = 0; i < 5; ++i) {
        cin >> numero;

        if (numero > 0) ++pos;
        else if (numero < 0) ++neg;

        if (numero % 2 == 0) ++par;
        else ++impar;
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}

