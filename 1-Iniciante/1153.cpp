#include <iostream>

using namespace std;

int main(void) {
    int fatorial = 1, num, i;

    cin >> num;

    for (i = 1; i <= num; ++i) fatorial *= i;

    cout << fatorial << endl;

    return 0;
}

