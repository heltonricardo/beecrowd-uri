#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    double n;
    int i;
    cin >> n;
    cout << fixed << setprecision(4);
    for (i = 0; i < 100; ++i) {
        cout << "N[" << i << "] = " << n << endl;
        n /= 2.0;
    }
    return 0;
}

