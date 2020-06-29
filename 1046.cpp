#include <iostream>

using namespace std;

int main(void)
{
    int A, B;

    cin >> A >> B;

    if (A >= B) cout << "O JOGO DUROU " << (B + 24) - A << " HORA(S)" << endl;
    else cout << "O JOGO DUROU " << B - A << " HORA(S)" << endl;

    return 0;
}

