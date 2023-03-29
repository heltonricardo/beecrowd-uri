#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    double A, B, C, R1, R2, DT;

    cin >> A >> B >> C;

    DT = (B * B) - (4.0 * A * C);
    R1 = (-B + sqrt(DT))/(2.0 * A);
    R2 = (-B - sqrt(DT))/(2.0 * A);

    if (A != 0.0 && DT > 0) {
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
    else cout << "Impossivel calcular" << endl;

    return 0;
}
