#include <iostream>

using namespace std;

int main(void) {
    int n, i, q;
    char x[102], *px;

    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> x;
        q = 0;
        px = x;
        while (*px != '\0') {
            switch (*px) {
                case '0': q += 6; break;
                case '1': q += 2; break;
                case '2': q += 5; break;
                case '3': q += 5; break;
                case '4': q += 4; break;
                case '5': q += 5; break;
                case '6': q += 6; break;
                case '7': q += 3; break;
                case '8': q += 7; break;
                case '9': q += 6; break;
            }
            ++px;
        }
        cout << q << " leds"<< endl;
    }
    return 0;
}

