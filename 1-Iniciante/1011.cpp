#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double r, v, pi = 3.14159;
    cin >> r;
    v = (4.0/3.0) * pi * r * r * r;
    cout << "VOLUME = " << fixed << setprecision(3) << v << endl;
    return 0;
}
