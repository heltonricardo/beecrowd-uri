#include <iostream>

using namespace std;

int main(void)
{
    int numero, i;

    cin >> numero;
    if (numero % 2 != 0) --numero;

    for (i = 2; i <= numero; i += 2)
        cout << i << "^2 = " << i*i << endl;

    return 0;
}

