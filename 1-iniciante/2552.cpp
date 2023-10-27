#include <iostream>>

#define t 102

using namespace std;

int main(void) {
    int l, c, m[t][t];
    int i, j, s;

    while (cin >> l >> c) {

        for (i = 0; i < t; ++i)
            for (j = 0; j < t; ++j)
                m[i][j] = 7;

        for (i = 1; i < l + 1; ++i)
            for (j = 1; j < c + 1; ++j)
                cin >> m[i][j];

        for (i = 1; i < l + 1; ++i) {
            for (j = 1; j < c + 1; ++j) {
                if (m[i][j] == 1)
                    cout << 9;
                else {
                    s = 0;
                    if (m[i-1][j] == 1) s += 1;
                    if (m[i+1][j] == 1) s += 1;
                    if (m[i][j-1] == 1) s += 1;
                    if (m[i][j+1] == 1) s += 1;
                    cout << s;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
