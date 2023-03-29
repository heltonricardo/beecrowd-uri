#include <iostream>

using namespace std;

bool upper(char x) {
    int i;
    char m[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    for (i = 0; i < 26; ++i)
        if (x == m[i]) return true;
    return false;
}

int main(void) {
    int n, i, a, b;
    char e[4];
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> e;
        a = e[0] - '0';
        b = e[2] - '0';
        if (a == b)
            cout << a * b << endl;
        else if (upper(e[1]))
            cout << b - a << endl;
        else
            cout << a + b << endl;
    }
    return 0;
}

