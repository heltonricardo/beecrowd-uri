#include <iostream>

using namespace std;

int main(void) {
    int t, m, n, i, s;
    while (cin >> m >> n) {
        if (m <= 0 || n <= 0) break;
        s = 0;
        if (m > n) {
            t = m; m = n; n = t;
        }
        for (i = m; i <= n; ++i) {
            cout << i << " ";
            s += i;
        }
        cout << "Sum=" << s << endl;
    }
    return 0;
}
