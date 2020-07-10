#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(void) {
    char e[55], n[55];
    int i, p;
    long long v;
    bool num, z;

    while (gets(e) != NULL) {
        p = 0;
        num = false;
        z = false;
        for (i = 0; i < strlen(e); ++i) {
            if (isdigit(e[i])) {
                if (e[i] != '0') {
                    n[p++] = e[i];
                    num = true;
                }
                else {
                    z = true;
                    if (num)
                        n[p++] = e[i];
                }

            }
            else if (e[i] == 'o' || e[i] == 'O') n[p++] = '0';
            else if (e[i] == 'l') n[p++] = '1';
            else if (e[i] == ' ' || e[i] == ',') continue;
            else {
                p = 0;
                break;
            }
        }
        n[p] = '\0';
        if (strlen(n) == 0 && z) {
            n[0] = '0';
            n[1] = '\0';
        }
        v = atoll(n);
        if (strlen(n) > 0 && strlen(n) < 11 && v >= 0 && v <= 2147483647) cout << v << endl;
        else cout << "error" << endl;
    }
    return 0;
}

