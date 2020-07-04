#include <iostream>

using namespace std;

int main(void) {
    int X, Z, i, soma = 0;

    cin >> X;
    do cin >> Z;
    while (Z <= X);

    for (i = X; i < Z; ++i) {
        soma += i;
        if (soma > Z) break;
    }

    cout << i - X + 1 << endl;
    return 0;
}

