#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int i, q = 0;
    float n;
    for (i = 0; i < 6; ++i) {
        cin >> n;
        if (n > 0) ++q;
    }
    cout << q << " valores positivos" << endl;
    return 0;
}

