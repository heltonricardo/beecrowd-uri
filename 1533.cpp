#include <iostream>

using namespace std;

int main(void) {
    int n, i, j, s, x, a;
    int e[1000], f[1000];

    while (cin >> n && n != 0) {
        for (i = 0; i < n; ++i) {
            cin >> e[i];
            f[i] = e[i];
        }
        for (i = 0; i < n-1; ++i)
            for (j = i+1; j < n; ++j)
                if (f[i] > f[j]) {
                    x = f[i];
                    f[i] = f[j];
                    f[j] = x;
                }
        s = f[n-2];
        for (i = 0; i < n; ++i)
            if (s == e[i])
                a = i + 1;
        cout << a << endl;
    }
    return 0;
}
