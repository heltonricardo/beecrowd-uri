#include <iostream>

using namespace std;

int main(void) {
    int n, x, y, a, b, i;

    while (cin >> n) {
        if (n == 0) break;
        cin >> x >> y;
        for (i = 0; i < n; ++i) {
            cin >> a >> b;
            if (a == x || b == y) cout << "divisa" << endl;
            else
                if (x < a)
                    if (y < b) cout << "NE" << endl;
                    else cout << "SE" << endl;
                else
                    if (y < b) cout << "NO" << endl;
                    else cout << "SO" << endl;
        }
    }

    return 0;
}
