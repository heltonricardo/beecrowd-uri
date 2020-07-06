#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int q, i;
    double n;

    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> n;
        cout << ceil(log2(n)) << " dias" << endl;
    }
    return 0;
}

