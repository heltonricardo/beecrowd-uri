#include <iostream>

using namespace std;

int main(void) {
    int H1, M1, H2, M2, T1, T2, TF;

    while (cin >> H1 >> M1 >> H2 >> M2) {
        if (H1 == 0 && H2 == 0 && M1 == 0 && M2 == 0) break;
        T1 = H1 * 60 + M1;
        T2 = H2 * 60 + M2;
        TF = T2 - T1;
        TF = (TF < 0)? 1440 + TF : TF;
        cout << TF << endl;
    }
    return 0;
}

