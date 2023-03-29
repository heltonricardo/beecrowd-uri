#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int qnt, rato = 0, sapo = 0, coelho = 0, i = 0, numero;
    char ANIMAL;

    cin >> qnt;

    for (i = 0; i < qnt; ++i) {
        cin >> numero >> ANIMAL; cin.ignore(80, '\n');

        switch (ANIMAL) {
            case 'C': coelho += numero; break;
            case 'R': rato += numero; break;
            case 'S': sapo += numero; break;
        }
    }

    cout << "Total: " << coelho + sapo + rato << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (float)((coelho * 100.0) / (coelho + sapo + rato)) << " %" << endl;
    cout << "Percentual de ratos: " << (float)((rato * 100.0) / (coelho + sapo + rato)) << " %" << endl;
    cout << "Percentual de sapos: " << (float)((sapo * 100.0) / (coelho + sapo + rato)) << " %" << endl;

    return 0;
}

