#include <iostream>

using namespace std;

void ex(int *x, int n) {
    int i;
    for (i = 0; i <= n; ++i) {
        if (x[i] % 2 == 0)
            cout << "par[" << i << "] = " << x[i] << endl;
        else
            cout << "impar[" << i << "] = " << x[i] << endl;
    }
    return;
}

int main(void) {
    int impar[5], par[5];
    int i = -1, p = -1, q, n;
    for (q = 0; q < 15; ++q) {
        cin >> n;
        if (n % 2 == 0) {
            ++p;
            par[p] = n;
        }
        else {
            ++i;
            impar[i] = n;
        }
        if (p == 4) {
            ex(par, p);
            p = -1;
        }
        if (i == 4) {
            ex(impar, i);
            i = -1;
        }
    }
    if (i != -1) ex(impar, i);
    if (p != -1) ex(par, p);
    return 0;
}

