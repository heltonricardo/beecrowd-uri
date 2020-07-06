#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    int i;
    double n;
    cout << fixed << setprecision(1);
    for (i = 0; i < 100; ++i) {
        cin >> n;
        if (n <= 10)
            cout << "A[" << i << "] = " << n << endl;
    }
    return 0;
}


