#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int i, pares = 0;
    float numero, soma = 0.0;

    for (i = 0; i < 6; ++i) {
        cin >> numero;
        if (numero > 0) {
            soma += numero;
            ++pares;
        }
    }

    cout << pares << " valores positivos" << endl;
    cout << fixed << setprecision(1) << soma / pares << endl;

    return 0;
}

