#include <iostream>

using namespace std;

int main(void) {
    int t, n, m, p = 0, i;
    cin >> t >> n;
    m = n;
    for (i = 1; i < t; ++i) {
        cin >> n;
        if (n < m) {
            m = n;
            p = i;
        }
    }
    cout << "Menor valor: " << m << endl;
    cout << "Posicao: " << p << endl;
    return 0;
}

