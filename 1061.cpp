#include <iostream>

using namespace std;

int main(void)
{
    int dia1 = 0, hora1 = 0, min1 = 0, seg1 = 0;
    int dia2 = 0, hora2 = 0, min2 = 0, seg2 = 0;
    long int total1 = 0, total2 = 0;
    int diferenca = 0;
    char lixo[5];

    scanf("%s %d %d %s %d %s %d", lixo, &dia1, &hora1, lixo, &min1, lixo, &seg1);
    scanf("%s %d %d %s %d %s %d", lixo, &dia2, &hora2, lixo, &min2, lixo, &seg2);

    total1 = dia1 * 86400 + hora1 * 3600 + min1 * 60 + seg1;
    total2 = dia2 * 86400 + hora2 * 3600 + min2 * 60 + seg2;

    diferenca = total2 - total1;

    dia1 = 0;
    hora1 = 0;
    min1 = 0;
    seg1 = 0;

    while (diferenca >= 86400) {
        diferenca -= 86400;
        dia1++;
    }

    while (diferenca >= 3600) {
        diferenca -= 3600;
        hora1++;
    }

    while (diferenca >= 60) {
        diferenca -= 60;
        min1++;
    }

    cout << dia1 << " dia(s)" << endl;
    cout << hora1 << " hora(s)" << endl;
    cout << min1 << " minuto(s)" << endl;
    cout << diferenca << " segundo(s)" << endl;

    return 0;
}
