#include <iostream>

using namespace std;

int main(void) {
    long long a, b;
    while (cin >> a >> b) {
        a -= b;
        a = (a > 0) ? a : -a;
        cout << a << endl;
    }
    return 0;
}

