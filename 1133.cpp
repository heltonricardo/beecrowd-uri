#include <iostream>

using namespace std;

int main(void) {
    int X, Y, TROCA;
    int i;

    cin >> X >> Y;

    if (X > Y) {
        TROCA = X;
        X = Y;
        Y = TROCA;
    }

    for (i = X + 1; i < Y; ++i)
        if ((i % 5 == 2) || (i % 5 == 3))
            cout << i << endl;

    return 0;
}

