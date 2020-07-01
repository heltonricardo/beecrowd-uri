#include <iostream>

using namespace std;

int main(void) {
    int numero, i;

    cin >> numero;

    for (i = 1; i <= 10; ++i)
        cout << i << " x " << numero << " = " << i * numero << endl;

    return 0;
}

