#include <iostream>

using namespace std;

int main(void) {
    int A, B, C, N;

    while (cin >> A && A != 0) {
        cin >> B >> C;
        N = int((A * B * C) / (C - A));
        if (N == 1) cout << "1 pagina" << endl;
        else cout << N << " paginas" << endl;
    }
    return 0;
}
