#include <iostream>

using namespace std;

int main(void)
{
    int X, Y, SOMA = 0, i, TROCA;

    cin >> X >> Y;

    if (Y > X) {
        TROCA = Y;
        Y = X;
        X = TROCA;
    }

    for (i = Y + 1; i < X; ++i) {
        if (i % 2 != 0) SOMA += i;
    }

    cout << SOMA << endl;

    return 0;
}

