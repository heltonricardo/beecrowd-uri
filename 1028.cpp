#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, m, q, i;
    int anterior, atual, resto;

    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> n >> m;
        anterior = n;
        atual = m;
        resto = anterior % atual;
        while (resto != 0) {
            anterior = atual;
            atual = resto;
            resto = anterior % atual;
        }
        cout << atual << endl;
    }
    return 0;
}

