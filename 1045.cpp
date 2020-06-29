#include <iostream>

using namespace std;

int main(void)
{
    float A, B, C, MAIOR, MENOR, MEDIO;

    cin >> A >> B >> C;

    MAIOR = A;
    if (MAIOR < B) MAIOR = B;
    if (MAIOR < C) MAIOR = C;

    MENOR = A;
    if (MENOR > B) MENOR = B;
    if (MENOR > C) MENOR = C;


    if ((MAIOR == A && MENOR == B) || (MAIOR == B && MENOR == A)) MEDIO = C;
    if ((MAIOR == A && MENOR == C) || (MAIOR == C && MENOR == A)) MEDIO = B;
    if ((MAIOR == B && MENOR == C) || (MAIOR == C && MENOR == B)) MEDIO = A;

    A = MAIOR;
    B = MEDIO;
    C = MENOR;

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if (A * A == B * B + C * C) cout << "TRIANGULO RETANGULO" << endl;
    if (A * A > B * B + C * C) cout << "TRIANGULO OBTUSANGULO" << endl;
    if (A * A < B * B + C * C) cout << "TRIANGULO ACUTANGULO" << endl;
    if (A == B || A == C || B == C) {
        if (A == B && B == C) cout << "TRIANGULO EQUILATERO" << endl;
        else cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}
