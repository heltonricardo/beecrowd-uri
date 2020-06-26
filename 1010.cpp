#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    int cp1, np1, cp2, np2;
    double vp1, vp2;

    cin >> cp1 >> np1 >> vp1;
    cin >> cp2 >> np2 >> vp2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << np1 * vp1 + np2 * vp2 << endl;

    return 0;
}
