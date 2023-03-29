#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float SALARIO, NSALARIO, REAJUSTE;
    int PERC;

    cin >> SALARIO;

    if (SALARIO <= 400.00) {
        NSALARIO = SALARIO * 1.15;
        REAJUSTE = SALARIO * 0.15;
        PERC = 15;
    }
    else if (SALARIO <= 800.00) {
        NSALARIO = SALARIO * 1.12;
        REAJUSTE = SALARIO * 0.12;
        PERC = 12;
    }
    else if (SALARIO <= 1200.00) {
        NSALARIO = SALARIO * 1.10;
        REAJUSTE = SALARIO * 0.10;
        PERC = 10;
    }
    else if (SALARIO <= 2000.00) {
        NSALARIO = SALARIO * 1.07;
        REAJUSTE = SALARIO * 0.07;
        PERC = 7;
    }
    else {
        NSALARIO = SALARIO * 1.04;
        REAJUSTE = SALARIO * 0.04;
        PERC = 4;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << NSALARIO << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << REAJUSTE << endl;
    cout << "Em percentual: " << PERC << " %" << endl;

    return 0;
}

