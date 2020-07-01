#include <iostream>

using namespace std;

int main(void) {
    int qnt, v, i;

    cin >> qnt;

    for (i = 0; i < qnt; ++i) {
        cin >> v;
        if (v == 0) cout << "NULL" << endl;
        else if (v > 0) {
            if (v % 2 == 0) cout << "EVEN POSITIVE" << endl;
            else cout << "ODD POSITIVE" << endl;
        }
        else {
            if (v % 2 == 0) cout << "EVEN NEGATIVE" << endl;
            else cout << "ODD NEGATIVE" << endl;
        }
    }
    return 0;
}

