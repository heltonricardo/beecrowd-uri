#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int i, q, j;
    long long n, li;
    bool p;
    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> n;
        p = (n != 0) ? true : false;
        li = sqrt(n) + 2.0;
        for (j = 2; j < li; ++j)
            if (n % j == 0) {
                p = false;
                break;
            }
        if (p || n == 2) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    return 0;
}

