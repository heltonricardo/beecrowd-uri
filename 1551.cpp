#include <iostream>
#include <cstring>

using namespace std;

int conta(char *c) {
    int i, j, q = 0;
    char abc[] = "qwertyuiopasdfghjklzxcvbnm";
    for (i = 0; i < 26; ++i)
        for (j = 0; j < strlen(c); ++j)
            if (abc[i] == c[j]) {
                ++q;
                break;
            }
    return q;
}

int main(void) {
    int n, i, q;
    char f[1001];

    cin >> n; cin.ignore(80, '\n');
    for (i = 0; i < n; ++i) {
        cin.getline(f, sizeof(f));
        q = conta(f);
        if (q == 26) cout << "frase completa" << endl;
        else if (q >= 13) cout << "frase quase completa" << endl;
        else cout << "frase mal elaborada" << endl;
    }
    return 0;
}

