#include <iostream>

using namespace std;

int main(void) {
    int A, B, C;
    int flag = 0;

    for (A = 0; A <= 2; ++A) {
        if (flag == 1) break;
        for (B = 0; B <= 8; B += 2) {
            if (flag == 1) break;
            for (C = A + 1; C <= A + 3; ++C) {
                if (B != 0) cout << "I=" << A << "." << B << " J=" << C << "." << B << endl;
                else cout << "I=" << A << " J=" << C << endl;
                if (A == 2 && B == 0 && C == 5) flag = 1;
            }
        }
    }
    return 0;
}
