#include <iostream>

using namespace std;

int main(void) {
    int X, Y, i;

    cin >> X >> Y;
    for (i = 1; i <= Y; ++i)
        if (i % X == 0) cout << i << endl;
        else cout << i << " ";

    return 0;
}

