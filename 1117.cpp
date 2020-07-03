#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int q = 0;
    float s = 0.0, n;

    while (q < 2) {
        cin >> n;
        if (0 <= n && n <= 10) {
            s += n;
            ++q;
        }
        else cout << "nota invalida" << endl;
    }
    cout << "media = " << fixed << setprecision(2) << s / 2.0 << endl;
    return 0;
}

