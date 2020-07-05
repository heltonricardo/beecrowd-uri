#include <iostream>

using namespace std;

int sqrt(int n) {
    return int(n * 0.5);
}

bool prime(int n) {
    int i;
    if (n == 0 || n == 1) return false;
    for (i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return false;
    return true;
}

int main(void) {
    int n, q, i;

    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> n;
        if (prime(n)) cout << n << " eh primo" << endl;
        else cout << n << " nao eh primo" << endl;
    }
    return 0;
}

