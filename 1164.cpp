#include <iostream>

using namespace std;

int main(void) {
    int q, i, n, s, j;
    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> n;
        s = 0;
        for (j = 1; j < n / 2 + 1; ++j)
            if (n % j == 0) s += j;
        if (n == s) cout << n << " eh perfeito" << endl;
        else cout << n << " nao eh perfeito" << endl;
    }
    return 0;
}

