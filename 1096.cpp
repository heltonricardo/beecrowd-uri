#include <iostream>

using namespace std;

int main(void) {
    int i, j;

    for (i = 1; i <= 9; i += 2)
        for (j = 7; j >= 5; --j)
            cout << "I=" << i << " J=" << j << endl;

    return 0;
}


