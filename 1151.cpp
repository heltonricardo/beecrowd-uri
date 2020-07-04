#include <iostream>

using namespace std;

int main(void) {
    int num, ant = 0, atual = 1, prox, i;

    cin >> num;

    for (i = 1; i <= num; ++i)
    {
        if (i != num) cout << ant << " ";
        else cout << ant << endl;

        prox = atual + ant;
        ant = atual;
        atual = prox;
    }

    return 0;
}

