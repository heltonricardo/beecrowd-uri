#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float SALARIO;

    cin >> SALARIO;
    cout << fixed << setprecision(2);

    if (SALARIO <= 2000.00) cout << "Isento" << endl;
    else if (SALARIO <= 3000.00) cout << "R$ " << (SALARIO - 2000.00) * 0.08 << endl;
    else if (SALARIO <= 4500.00) cout << "R$ " << (SALARIO - 3000.00) * 0.18 + 80.00 << endl;
    else cout << "R$ " << (SALARIO - 4500.00) * 0.28 + 350.00 << endl;;
    return 0;
}

