#include <iostream>

using namespace std;

int main(void) {
    int n, r, i, x, q;
    int v[1000];

    while (cin >> n >> r) {
        for (i = 0; i < n; ++i)
            v[i] = i+1;
        for (i = 0; i < r; ++i) {
            cin >> x;
            v[x-1] = 0;
        }
        q = 0;
        for (i = 0; i < n; ++i)
            if (v[i] != 0) {
                ++q;
                cout << v[i] << " ";
            }
        if (q == 0) cout << "*";
        cout << endl;
    }
    return 0;
}

