#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int qnt, continuar = 1;
    float soma, nota;

    while (continuar == 1) {
        qnt = 0;
        soma = 0.0;
        while(qnt < 2) {
            cin >> nota;
            if (0.0 <= nota && nota <= 10.0) {
                soma += nota;
                ++qnt;
            }
            else cout << "nota invalida" << endl;
        }

        soma /= 2.0;
        cout << "media = " << fixed << setprecision(2) << soma << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> continuar;
        }
        while (continuar != 1 && continuar != 2);
    }
    return 0;
}

