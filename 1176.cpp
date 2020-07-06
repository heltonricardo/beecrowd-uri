#include <iostream>

using namespace std;

unsigned long long fib(int n) {
    unsigned long long a = 0, b = 1, c = 0;
    int i;
    for (i = 0; i < n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main(void) {
    int q, i, n;
    cin >> q;
    for (i = 0; i < q; ++i){
        cin >> n;
        cout << "Fib(" << n << ") = " << fib(n) << endl;
    }
    return 0;
}

