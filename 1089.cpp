#include <iostream>

using namespace std;

int main(void) {
    int n, a, p, s, i;
    int v[10000];

    while (cin >> n && n != 0) {
        for (i = 0; i < n; ++i)
            cin >> v[i];
        a = (v[n-1] < v[0]) ? 1 : 0;
        p = 0;
        for (i = 1; i < n; ++i) {
            if (v[i-1] < v[i]) s = 1;
            else s = 0;
            if (s != a) ++p;
            a = s;
        }
        if (v[n-1] < v[0]) s = 1;
        else s = 0;
        if (s != a) ++p;
        cout << p << endl;
    }
    return 0;
}

