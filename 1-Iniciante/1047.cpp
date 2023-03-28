#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, D;
    int MINUTOS1, MINUTOS2;
    int QHORAS = 0;

    cin >> A >> B >> C >> D;

    MINUTOS1 = A * 60 + B;
    MINUTOS2 = C * 60 + D;

    MINUTOS1 -= MINUTOS2;

    if (A > C) MINUTOS1 -= 1440;

    MINUTOS1 = (MINUTOS1 < 0)? -MINUTOS1 : MINUTOS1;

    while (MINUTOS1 >= 60) {
        MINUTOS1 -= 60;
        QHORAS++;
    }

    if (QHORAS == 0 && MINUTOS1 == 0) QHORAS = 24;

    cout << "O JOGO DUROU " << QHORAS << " HORA(S) E " << MINUTOS1 << " MINUTO(S)" << endl;

    return 0;
}

