#include <iostream>

using namespace std;

int main(void) {
    int s;

    do {
        cin >> s;
        if (s == 2002) break;
        cout << "Senha Invalida" << endl;
    } while (s != 2002);
    cout << "Acesso Permitido" << endl;

    return 0;
}
