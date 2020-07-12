#include <iostream>

using namespace std;

int main(void) {
    int q, j, i, n, m, x;
    cin >> q;
    for (j = 0; j < q; ++j) {
        cin >> m;
        for (i = 0; i < m; ++i) {
            cin >> x;
            if (i == int(m / 2))
                cout << "Case " << j+1 << ": " << x << endl;
        }
    }
    return 0;
}

