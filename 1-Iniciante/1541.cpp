#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int A, B, C;

    while (cin >> A && A != 0) {
        cin >> B >> C;
        cout << int(sqrt((A*B*100) / C)) << endl;
    }

    return 0;
}

