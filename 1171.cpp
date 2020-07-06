#include <iostream>

using namespace std;

int main(void) {
    int q, i, n;
    int lista[2000];

    for (i = 0; i < 2000; ++i)
        lista[i] = 0;

    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> n;
        ++lista[n-1];
    }

    for (i = 0; i < 2000; ++i)
        if (lista[i] != 0)
        cout << i+1 << " aparece " << lista[i] << " vez(es)" << endl;
    return 0;
}

