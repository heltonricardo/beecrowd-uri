#include <iostream>

using namespace std;

int main(void) {
    int tot_inter = 0, tot_grem = 0;
    int inter = 0, grem = 0, emps = 0;
    int resp = 1, qnt = 0;

    while (resp == 1) {
        ++qnt;
        cin >> inter >> grem;

        if (inter == grem) ++emps;
        else if (inter > grem) ++tot_inter;
        else ++tot_grem;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> resp;
    }

    cout << qnt << " grenais" << endl;
    cout << "Inter:" << tot_inter << endl;
    cout << "Gremio:" << tot_grem << endl;
    cout << "Empates:" << emps << endl;

    if (tot_inter == tot_grem) cout << "Nao houve vencedor" << endl;
    else if (tot_inter > tot_grem) cout << "Inter venceu mais" << endl;
    else cout << "Gremio venceu mais" << endl;

    return 0;
}

