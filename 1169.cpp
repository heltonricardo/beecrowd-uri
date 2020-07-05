#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int n, i, q;

    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> n;
        cout << (unsigned long long) (pow(2, n) / 12000) << " kg" << endl;
    }
    return 0;
}


