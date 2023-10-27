#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int qnt, i;
    char sheld[10], raj[10];

    cin >> qnt;

    for (i = 0; i < qnt; ++i) {
        cin >> sheld >> raj;
        cout << "Caso #" << i+1 << ": ";
        if (strcmp(sheld, raj) == 0)
            cout << "De novo!" << endl;
        else if (strcmp(sheld, "tesoura") == 0 and (strcmp(raj, "papel") == 0 or strcmp(raj, "lagarto") == 0))
            cout << "Bazinga!" << endl;
        else if (strcmp(sheld, "papel") == 0 and (strcmp(raj, "pedra") == 0 or strcmp(raj, "Spock") == 0))
            cout << "Bazinga!" << endl;
        else if (strcmp(sheld, "pedra") == 0 and (strcmp(raj, "lagarto") == 0 or strcmp(raj, "tesoura") == 0))
            cout << "Bazinga!" << endl;
        else if (strcmp(sheld, "lagarto") == 0 and (strcmp(raj, "Spock") == 0 or strcmp(raj, "papel") == 0))
            cout << "Bazinga!" << endl;
        else if (strcmp(sheld, "Spock") == 0 and (strcmp(raj, "tesoura") == 0 or strcmp(raj, "pedra") == 0))
            cout << "Bazinga!" << endl;
        else cout << "Raj trapaceou!" << endl;
    }
    return 0;
}

