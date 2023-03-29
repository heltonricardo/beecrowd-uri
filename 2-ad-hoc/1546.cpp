#include <iostream>

using namespace std;

int main(void) {
    int q, p, r, s, n;

    cin >> q;
    for (p = 0; p < q; ++p) {
        cin >> r;
        for (s = 0; s < r; ++s) {
            cin >> n;
            switch (n) {
                case 1: cout << "Rolien";   break;
                case 2: cout << "Naej";     break;
                case 3: cout << "Elehcim";  break;
                case 4: cout << "Odranoel"; break;
            }
            cout << endl;
        }
    }
    return 0;
}

