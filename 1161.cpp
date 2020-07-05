#include <iostream>

using namespace std;

unsigned long long fatorial(int n) {
    int i;
    unsigned long long fat = 1;
    for (i = 1; i <= n; ++i) fat *= i;
    return fat;
}

int main(void) {
    int X, Y;

    while (cin >> X >> Y) {
    if (X != Y) cout << fatorial(X) + fatorial(Y)<< endl;
    else cout << fatorial(X) * 2 << endl;
    }
    return 0;
}


