#include <iostream>

using namespace std;

int main(void) {
    int i, j, min = 2;

    for (i = 1; i <= 9; i += 2) {
        min += 2;
        for (j = min + 3; j > min; --j)
            cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}



