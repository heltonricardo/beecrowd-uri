#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    double n, s = 0.0;
    int i, j, q = 0;
    char op;

    cin >> op;
    for (i = 0; i < 12; ++i)
        for (j = 0; j < 12; ++j) {
            cin >> n;
            if (j > i && i + j < 11) {
                s += n;
                ++q;
            }
    }
    s = (op == 'S') ? s : double(s / q);
    cout << fixed << setprecision(1);
    cout << s << endl;
    return 0;
}




