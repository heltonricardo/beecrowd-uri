#include <iomanip>
#include <iostream>

using namespace std;

int d(int n, int x, int y) {
    int m;
    m = (x+1 < y+1) ? x+1 : y+1;
    m = ( m  < n-x) ?  m  : n-x;
    m = ( m  < n-y) ?  m  : n-y;
    return m;
}

int main(void) {
    int n, i, j;

    while (cin >> n && n != 0) {
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                cout << setw(3) << d(n, i, j);
                if (!(j == n-1)) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

