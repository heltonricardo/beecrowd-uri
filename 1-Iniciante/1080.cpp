#include <iostream>

using namespace std;

int main(void) {
    int i, MAIOR, numero, PosMAIOR;

    cin >> numero;
    MAIOR = numero;
    PosMAIOR = 1;

    for (i = 2; i <= 100; ++i) {
        cin >> numero;
        if (numero > MAIOR) {
            MAIOR = numero;
            PosMAIOR = i;
        }
    }
    cout << MAIOR << endl << PosMAIOR << endl;
    return 0;
}

