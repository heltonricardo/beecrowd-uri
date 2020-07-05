#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    double soma = 0.0;
    int A, B = 1;

    for (A = 1; A <= 39; A += 2, B *= 2)
        soma += (double)(A / (B * 1.0));

    cout << fixed << setprecision(2) << soma << endl;

    return 0;
}

