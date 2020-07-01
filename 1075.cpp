#include <iostream>

using namespace std;

int main(void) {
    int numero, i;

    cin >> numero;

    for (i = 1; i < 10000; ++i)
        if (i % numero == 2) cout << i << endl;

    return 0;
}

