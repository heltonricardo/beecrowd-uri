#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    float n, s = 0;
    int i, j, co;
    char op;

    cin >> co >> op;
    for (i = 0; i < 12; ++i)
        for (j = 0; j < 12; ++j) {
            cin >> n;
            if (j == co) s += n;
        }
    s = (op == 'S') ? s : s / 12.0;
    cout << fixed << setprecision(1);
    cout << s << endl;
    return 0;
}

