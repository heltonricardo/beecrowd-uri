#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int n, l, v, o, c;

    while (cin >> n && n != 0) {
        l = o = 1;
        while (l <= n) {
            v = l;
            c = 1;
            while (c <= n) {
                if (c != n)
                    cout << setw(3) << v << " ";
                else {
                    cout << setw(3) << v << endl;
                    o = 0;
                }
                if (v == 1) o = 1;
                else if (v == n) o = 0;
                if (o) ++v;
                else --v;
                ++c;
            }
            ++l;
        }
        cout << endl;
    }
    return 0;
}

