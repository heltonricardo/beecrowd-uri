#include <iostream>

using namespace std;

int main(void) {
    int n, i, j, qt, s, d, m, ind;

    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> qt >> s;
        d = ind = 999;
        for (j = 0; j < qt; ++j) {
            cin >> m;
            if (d > abs(s - m)) {
                d = abs(s - m);
                ind = j;
            }
        }
        cout << ind + 1 << endl;
    }
    return 0;
}
