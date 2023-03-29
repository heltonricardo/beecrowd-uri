#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int q, i, t, n[1000], j, s, u;
    double m;
    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> t;
        s = 0;
        for (j = 0; j < t; ++j) {
            cin >> n[j];
            s += n[j];
        }
        m = double(s / t);
        u = 0;
        for (j = 0; j < t; ++j)
            if (n[j] > m) ++u;
        cout << fixed << setprecision(3);
        cout << double(u * 100.0) / t << "%" << endl;
    }
    return 0;
}

