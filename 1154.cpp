#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    int idade, soma = 0, qnt = 0;

    while (cin >> idade && idade >= 0) {
        ++qnt;
        soma += idade;
    }

    cout << fixed << setprecision(2) << soma / (qnt * 1.0) << endl;
    return 0;
}

