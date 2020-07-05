#include <iostream>

using namespace std;

int main(void) {
    int num, soma;

    while (cin >> num && num != 0) {
        if (num % 2 != 0) ++num;
        cout << 5 * num + 20 << endl;
    }
    return 0;
}

