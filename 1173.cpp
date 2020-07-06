#include <iostream>

using namespace std;

int main(void) {
    int i, n;
    cin >> n;
    for (i = 0; i < 10; ++i) {
        cout << "N[" << i << "] = " << n << endl;
        n *= 2;
    }
    return 0;
}

