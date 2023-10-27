#include <iostream>

using namespace std;

int main(void) {
    int num, i;

    while (cin >> num && num != 0) {
        for (i = 1; i <= num; ++i)
            if (i != num) cout << i << " ";
            else cout << i << endl;
    }
    return 0;
}

