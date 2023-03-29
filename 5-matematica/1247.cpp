#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int D, VF, VG;
    double H, TF, TG;

    while (cin >> D >> VF >> VG) {
        H = sqrt(144 + D * D);
        TF = 12.0 / VF;
        TG = H / VG;

        if (TG <= TF) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}

