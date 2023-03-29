#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int q, i, j, d;
    char a[13], b[13];
    bool enc;

    cin >> q;

    for (i = 0; i < q; ++i) {
        cin >> a >> b;
        enc = true;
        d = strlen(a) - strlen(b);
        if (d >= 0) {
            for (j = 0; j < strlen(b); ++j)
                if (a[j+d] != b[j])
                    enc = false;
        }
        else enc = false;
        if (enc) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    return 0;
}

