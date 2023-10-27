#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, x;
    cin >> n;
    x = n / 3600;
    cout << x << ":";
    n -= x * 3600;
    x = n / 60;
    cout << x << ":";
    n -= x * 60;
    cout << n << endl;
    return 0;
}

