#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int q, i, t, j;
    char e[105];

    cin >> q;
    cin.ignore(80,'\n');
    for (i = 0; i < q; ++i) {
        cin.getline(e, 105);
        t = strlen(e) / 2 - 1;
        for (j = t; j >= 0; --j)
            cout << e[j];
        for (j = strlen(e) - 1; j > t; --j)
            cout << e[j];
        cout << endl;
    }
    return 0;
}

