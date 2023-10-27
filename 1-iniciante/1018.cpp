#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int v, x;
    cin >> v;
    cout << v << endl;
    x = v / 100;
    cout << x << " nota(s) de R$ 100,00" << endl;
    v -= x * 100;

    x = v / 50;
    cout << x << " nota(s) de R$ 50,00" << endl;
    v -= x * 50;

    x = v / 20;
    cout << x << " nota(s) de R$ 20,00" << endl;
    v -= x * 20;

    x = v / 10;
    cout << x << " nota(s) de R$ 10,00" << endl;
    v -= x * 10;

    x = v / 5;
    cout << x << " nota(s) de R$ 5,00" << endl;
    v -= x * 5;

    x = v / 2;
    cout << x << " nota(s) de R$ 2,00" << endl;
    v -= x * 2;

    cout << v << " nota(s) de R$ 1,00" << endl;
    return 0;
}

