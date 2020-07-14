#include <iostream>

using namespace std;

int main(void) {
    int n, k, i, j, q, e, v[1000];
    while (cin >> n >> k && (n != 0 || k != 0)) {
        for (i = 0; i < n; ++i) cin >> v[i];
        q = 0;
        for (i = 1; i < 101; ++i) {
            e = 0;
            for (j = 0; j < n; ++j)
                if (i == v[j]) ++e;
            if (e >= k) ++q;
        }
        cout << q << endl;
    }
    return 0;
}

