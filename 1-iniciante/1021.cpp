#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double v;
    int x;
    cin >> v;
    cout << "NOTAS:" << endl;
    x = v / 100;
    cout << x << " nota(s) de R$ 100.00" << endl;
    v -= x * 100;

    x = v / 50;
    cout << x << " nota(s) de R$ 50.00" << endl;
    v -= x * 50;

    x = v / 20;
    cout << x << " nota(s) de R$ 20.00" << endl;
    v -= x * 20;

    x = v / 10;
    cout << x << " nota(s) de R$ 10.00" << endl;
    v -= x * 10;

    x = v / 5;
    cout << x << " nota(s) de R$ 5.00" << endl;
    v -= x * 5;

    x = v / 2;
    cout << x << " nota(s) de R$ 2.00" << endl;
    v -= x * 2;

    cout << "MOEDAS:" << endl;

    x = v / 1;
    cout << x << " moeda(s) de R$ 1.00" << endl;
    v -= x * 1;

    x = v / 0.5;
    cout << x << " moeda(s) de R$ 0.50" << endl;
    v -= x * 0.5;

    x = v / 0.25;
    cout << x << " moeda(s) de R$ 0.25" << endl;
    v -= x * 0.25;

    x = v / 0.1;
    cout << x << " moeda(s) de R$ 0.10" << endl;
    v -= x * 0.1;

    x = v / 0.05;
    cout << x << " moeda(s) de R$ 0.05" << endl;
    v -= x * 0.05;

    x = v / 0.01 + 0.00001;
    cout << x << " moeda(s) de R$ 0.01" << endl;

    return 0;
}


