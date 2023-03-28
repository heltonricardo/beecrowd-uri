#include <iostream>

using namespace std;

int main(void) {
    int qnt, X, Y, i, j;
    int soma;

    cin >> qnt;

    for (i = 0; i < qnt; ++i) {
        cin >> X >> Y;
        X = (X % 2 == 0) ? ++X : X;
        soma = 0;
        for (j = 1; j <= Y; ++j, X += 2) soma += X;
        cout << soma << endl;
    }

    return 0;
}

