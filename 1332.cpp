#include <cstring>
#include <iostream>

using namespace std;

int co(char *e) {
    int q = 0;
    if (*e++ == 'o') ++q;
    if (*e++ == 'n') ++q;
    if (*e   == 'e') ++q;
    return q;
}

int main(void) {
    int q, i;
    char e[7];

    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> e;
        if (strlen(e) == 5) cout << 3 << endl;
        else {
            if (co(e) > 1) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
    return 0;
}
