#include <iostream>

using namespace std;

int main(void) {
    int i, j, anos = 0, qnt;
    int PA, PB;
    double G1, G2;

    cin >> qnt;

    for (j = 0; j < qnt; ++j) {
        cin >> PA >> PB >> G1 >> G2;

        i = 1;
        while (1) {
            PA += (double)((G1 / 100.0) * PA);
            PB += (double)((G2 / 100.0) * PB);
            if (PA > PB || i == 101) break;
            ++i;
        }

        if (i == 101) cout << "Mais de 1 seculo." << endl;
        else cout << i << " anos." << endl;
    }

    return 0;
}

