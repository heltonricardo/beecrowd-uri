#include <iostream>

using namespace std;

int main(void) {
    int i, num;

    cin >> num;

    for (i = 1; i <= num * 4; ++i)
        if (i % 4 == 0) cout << "PUM" << endl;
        else cout << i << " ";

    return 0;
}

