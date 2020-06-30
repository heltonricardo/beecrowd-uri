#include <iostream>

using namespace std;

int main(void)
{
    int n, i, q;
    cin >> n;
    q = 0;
    i = n;
    while (q < 6) {
        if (i % 2 != 0) {
            cout << i << endl;
            ++q;
        }
        ++i;
    }
    return 0;
}

