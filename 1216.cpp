#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int q = 0;
    string lx;
    double n, s;
    while (getline(cin, lx)) {
        cin >> n;
        getchar();
        ++q;
        s += n;
    }
    cout << fixed << setprecision(1);
    cout << double(s / q) << endl;
    return 0;
}

