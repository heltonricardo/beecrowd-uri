#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int n, m, i, j;

    while (cin >> n) {
        m = n-1;
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                if (i+j == m) cout << 2;
                else if (i == j) cout << 1;
                else cout << 3;
            }
            cout << endl;
        }
    }
    return 0;
}

