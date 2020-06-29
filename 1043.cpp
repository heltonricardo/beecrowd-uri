#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float A, B, C;

    cin >> A >> B >> C;
    if ((A + B > C) && (B + C > A) && (A + C > B))
        cout << "Perimetro = " << fixed << setprecision(1) << A + B + C << endl;
    else cout << "Area = " << fixed << setprecision(1) << ((A + B) * C) / 2.0 << endl;;
    return 0;
}

