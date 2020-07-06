#include <iostream>

using namespace std;

int main(void) {
    int n, i, v[20];
    for (i = 0; i < 20; ++i)
        cin >> v[19-i];
    for (i = 0; i < 20; ++i)
        cout << "N[" << i << "] = " << v[i] << endl;
    return 0;
}

