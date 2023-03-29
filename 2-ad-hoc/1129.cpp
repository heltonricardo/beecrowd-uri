#include <iostream>

using namespace std;

int main(void) {
    int n, i, c[5], j, q;
    while (cin >> n && n != 0) {
        for (i = 0; i < n; ++i) {
            q = 0;
            for (j = 0; j < 5; ++j){
                cin >> c[j];
                if (c[j] <= 127) {
                    c[j] = 0;
                    q += 1;
                }
            }
            if (q == 1) {
                if (c[0] == 0) cout << "A" << endl;
                else if (c[1] == 0) cout << "B" << endl;
                else if (c[2] == 0) cout << "C" << endl;
                else if (c[3] == 0) cout << "D" << endl;
                else if (c[4] == 0) cout << "E" << endl;
            }
            else cout << "*" << endl;
        }
    }
    return 0;
}

