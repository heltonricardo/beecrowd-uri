#include <iostream>

using namespace std;

int hr(int n) {
    if (n % 2 == 0)
        return n / 2;
    else
        return 3 * n + 1;
}

int main(void) {
    int n, m;
    while (cin >> n && n != 0) {
        m = n;
        while (n != 1) {
            if (m < n) m = n;
            n = hr(n);
        }
        cout << m << endl;
    }
    return 0;
}

