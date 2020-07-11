#include <iostream>

using namespace std;

double dec(double f) {
    return f - int(f);
}

int main(void) {
    double n, c;
    while (cin >> n >> c) {
        if (dec(n) < dec(c))
            cout << int(n) << endl;
        else
            cout << int(n) + 1 << endl;
    }
    return 0;
}

