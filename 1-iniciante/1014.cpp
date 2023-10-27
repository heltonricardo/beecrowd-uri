#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int d;
    double l;
    cin >> d >> l;
    cout << fixed << setprecision(3) << d / l << " km/l" << endl;
    return 0;
}

