#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    double a, b, c, m;
    cin >> a >> b >> c;
    m = (a * 2.0 + b * 3.0 + c * 5.0) / 10;
    cout << "MEDIA = " << fixed << setprecision(1) << m << endl;
    return 0;
}

