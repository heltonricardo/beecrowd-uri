#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void) {
    int n, i, j, v, m, x;
    char t[10];

    while (cin >> n && n != 0) {
        x = pow(4, (n-1));
        sprintf(t, "%d", x);
        m = strlen(t);
        for (i = 0; i < n; ++i) {
            v = pow(2, i);
            for (j = 0; j < n; ++j) {
                cout << setw(m) << v;
                if (j != n-1) cout << " ";
                v *= 2;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

