#include <iostream>

using namespace std;

int main(void) {
    int q, i, a, b, x, y;
    while (cin >> q && q != 0) {
        a = b = 0;
        for (i = 0; i < q; ++i) {
            cin >> x >> y;
            if (x > y) ++a;
            else if (y > x) ++b;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}

