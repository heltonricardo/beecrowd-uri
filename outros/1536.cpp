#include <iostream>

using namespace std;

int main(void) {
    int q, p, a, b;
    int s1, s2, p1, p2, a1, a2;
    char lx;

    cin >> q;
    for (p = 0; p < q; ++p) {
        s1 = s2 = p1 = p2 = a1 = a2 = 0;
        cin >> a >> lx >> b;
        a2 = a;
        s1 += a;
        s2 += b;
        if (a > b) p1 += 3;
        else if (b > a) p2 += 3;
        else {
            ++p1;
            ++p2;
        }
        cin >> b >> lx >> a;
        a1 = b;
        s1 += a;
        s2 += b;
        if (a > b) p1 += 3;
        else if (b > a) p2 += 3;
        else {
            ++p1;
            ++p2;
        }
        if (p1 > p2) cout << "Time 1" << endl;
        else if (p2 > p1) cout << "Time 2" << endl;
        else {
            if (s1 - s2 > s2 - s1) cout << "Time 1" << endl;
            else if (s2 - s1 > s1 - s2) cout << "Time 2" << endl;
            else {
                if (a1 > a2) cout << "Time 1" << endl;
                else if (a2 > a1) cout << "Time 2" << endl;
                else cout << "Penaltis" << endl;
            }
        }
    }
    return 0;
}
