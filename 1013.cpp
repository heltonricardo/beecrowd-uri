#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int a, m;
    cin >> m >> a;
    if (a > m) m = a;
    cin >> a;
    if (a > m) m = a;
    cout << m << " eh o maior" << endl;
    return 0;
}

