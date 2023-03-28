#include <iostream>

using namespace std;

int main(void) {
    short n, c = 1;

    while (cin >> n) {
        while (n % c == 0) ++c;
        cout << c << endl;
    }

    return 0;
}

