#include <iostream>

using namespace std;

int main(void)
{
    int i, pares = 0, numero;

    for (i = 0; i < 5; ++i) {
        cin >> numero;
        if (numero % 2 == 0) ++pares;
    }

    cout << pares << " valores pares" << endl;

    return 0;
}
