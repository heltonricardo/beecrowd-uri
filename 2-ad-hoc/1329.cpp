#include <iostream>

using namespace std;

int main(void) {
    int q, n, m, j, i;
    while (cin >> q && q != 0) {
        m = j = 0;
        for (i = 0; i < q; ++i) {
            cin >> n;
            if (n) ++j;
            else ++m;
        }
        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }
    return 0;
}

