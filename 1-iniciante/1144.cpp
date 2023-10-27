#include <iostream>

using namespace std;

int main(void) {
    int n, i;

    cin >> n;

    for (i = 1; i <= n; ++i) {
        cout << i << " ";
        cout << i * i << " ";
        cout << i * i * i << endl;
        cout << i << " ";
        cout << i * i + 1<< " ";
        cout << i * i * i + 1<< endl;
    }

    return 0;
}


