#include <iostream>

using namespace std;

int main(void) {
    int n;
    while (cin >> n)
        if (n % 6 == 0) cout << "Y" << endl;
        else cout << "N" << endl;
    return 0;
}

