#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        cout << 2 * a - b << endl;
    }
    return 0;
}

