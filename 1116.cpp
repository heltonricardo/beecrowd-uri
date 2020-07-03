#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int qnt, i;
    int X, Y;

    cin >> qnt;

    for (i = 0; i < qnt; ++i) {
        cin >> X >> Y;
        if (Y != 0) cout << fixed << setprecision(1) << (double)(X / (Y * 1.0)) << endl;
        else printf("divisao impossivel\n");
    }
    return 0;
}
