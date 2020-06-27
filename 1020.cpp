#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, x;
    cin >> n;
    x = n / 365;
    cout << x << " ano(s)" << endl;
    n -= x * 365;
    x = n / 30;
    cout << x << " mes(es)" << endl;
    n -= x * 30;
    cout << n << " dia(s)" << endl;
    return 0;
}


