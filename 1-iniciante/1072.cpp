#include <iostream>

using namespace std;

int main(void) {
    int qnt, i, in = 0, out = 0, numero;
    cin >> qnt;
    for (i = 0; i < qnt; ++i) {
        cin >> numero;
        if (numero >= 10 && numero <= 20) ++in;
        else ++out;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}

