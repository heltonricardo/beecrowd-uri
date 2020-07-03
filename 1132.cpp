#include <iostream>

using namespace std;

int main(void) {
    int X, Y, TROCA;
    int i;
    int soma = 0;

    cin >> X >> Y;

    if (X > Y) {
        TROCA = X;
        X = Y;
        Y = TROCA;
    }

    for (i = X; i <= Y; ++i)
        if (i % 13 != 0) soma += i;

    cout << soma << endl;

    return 0;
}

