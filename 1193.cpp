#include <iostream>

using namespace std;

int main(void) {
    int i, q;
    char e[4], m;
    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> e >> m;
        cout << "Case " << i+1 << ":" << endl;
        switch (m[0]) {
            case 'b':

                break;
            case 'd':
                cout << hex << int(e) << endl;
                cout << bin << int(e) << endl;
                break;
            case 'h':
                break;
        }
    }
    return 0;
}

