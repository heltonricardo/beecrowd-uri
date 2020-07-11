#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main(void) {
    int v, c, d, i, t;
    char buff[15];

    while (cin >> v >> c) {
        sprintf(buff, "%d", v);
        t = strlen(buff);
        d = t % 3;
        d = (d == 0) ? 2 : d-1;
        cout << "$";
        for (i = 0; i < t; ++i) {
            cout << buff[i];
            if (i == d && i != t-1) {
                cout << ",";
                d += 3;
            }
        }
        cout << ".";
        cout.fill('0');
        cout << setw(2) << c;
        cout << endl;
    }
    return 0;
}
