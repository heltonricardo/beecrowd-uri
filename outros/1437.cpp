#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int n, p, i, f;
    char c[1002];

    while (cin >> n && n != 0) {
        getchar();
        cin >> c;
        p = 90;
        for (i = 0; i < strlen(c); ++i) {
            if (c[i] == ' ') continue;
            if (c[i] == 'D') p -= 90;
            else p += 90;
        }
        f = p % 360;
        if (f == 0) cout << "L" << endl;
        else if (f == 90) cout << "N" << endl;
        else if (f == 180) cout << "O" << endl;
        else cout << "S" << endl;
    }
    return 0;
}

