#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;

    while (cin >> a >> b >> c) {
        if (a == b && b == c) cout << "*" << endl;
        else if (b == c && a != c) cout << "A" << endl;
        else if (a == c && b != c) cout << "B" << endl;
        else cout << "C" << endl;
    }
    return 0;
}

