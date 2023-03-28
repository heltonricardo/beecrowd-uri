#include <iostream>

using namespace std;

int main(void) {
    int num, i;

    cin >> num;

    for (i = 1; i <= num / 2 + 1; ++i)
        if (num % i == 0) cout << i << endl;
    cout << num << endl;
    return 0;
}

