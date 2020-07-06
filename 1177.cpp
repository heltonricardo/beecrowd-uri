#include <iostream>

using namespace std;

int main(void) {
    int i, n, c = 0;
    cin >> n;
    for (i = 0; i < 1000; ++i) {
        cout << "N[" << i << "] = " << c++ << endl;
        if (c == n) c = 0;
    }
    return 0;
}
