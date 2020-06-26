#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double a, b, c, pi = 3.14159;
    double tri, cir, tra, qua, ret;

    cin >> a >> b >> c;

    tri = (a * c) / 2.0;
    cir = pi * c * c;
    tra = ((a + b) * c) / 2.0;
    qua = b * b;
    ret = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << tri << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << cir << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << tra << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << qua << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << ret << endl;

    return 0;
}

