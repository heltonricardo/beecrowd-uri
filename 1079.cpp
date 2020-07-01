#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    int qnt, i;
    float A, B, C;

    cin >> qnt;

    for (i = 0; i < qnt; ++i) {
        cin >> A >> B >> C;
        cout << fixed << setprecision(1) << A * 0.2 + B * 0.3 + C * 0.5 << endl;
    }

    return 0;
}

