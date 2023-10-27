#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int cod, qnt;

    cin >> cod >> qnt;

    switch (cod)
    {
        case 1:
            cout << "Total: R$ " << fixed << setprecision(2) << qnt * 4.00 << endl;
            break;
        case 2:
            cout << "Total: R$ " << fixed << setprecision(2) << qnt * 4.50 << endl;
            break;
        case 3:
            cout << "Total: R$ " << fixed << setprecision(2) << qnt * 5.00 << endl;
            break;
        case 4:
            cout << "Total: R$ " << fixed << setprecision(2) << qnt * 2.00 << endl;
            break;
        case 5:
            cout << "Total: R$ " << fixed << setprecision(2) << qnt * 1.50 << endl;
            break;
    }
    return 0;
}
