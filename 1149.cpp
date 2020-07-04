#include <iostream>

using namespace std;

int main(void) {
    int A, N, i, soma = 0;

    cin >> A;
    do cin >> N;
    while (N <= 0);

    for (i = 1; i <= N; ++i, ++A) soma += A;

    cout << soma << endl;
    return 0;
}

