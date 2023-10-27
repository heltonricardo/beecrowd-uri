#include <iostream>

using namespace std;

unsigned long long f(unsigned long long n) {
    unsigned long long i;
    unsigned long long a = 1;
    for (i = 2; i <= n; ++i) a *= i;
    return a;
}

unsigned long long c(unsigned long long n, unsigned long long p) {
    return f(n) / (f(p) * f(n-p));
}

int main(void) {
    unsigned long long n, R;
    cin >> n;
    R = 1 + (((n-1)n)/2) + (((n) (n - 1) (n - 2 ) (n - 3))/24);
    cout << R;
    //cout << c(n, 4) + c(n, 2) + 1 << endl;
    return 0;
}

