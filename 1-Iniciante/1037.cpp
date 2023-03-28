#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double num;

    cin >> num;

    if (num >= 0 && num <= 25.0)
        cout << "Intervalo [0,25]" << endl;
    else if (num > 25.0 && num <= 50.0)
        cout << "Intervalo (25,50]" << endl;
    else if (num > 50.0 && num <= 75.0)
        cout << "Intervalo (50,75]" << endl;
    else if (num > 75.0 && num <= 100.0)
        cout << "Intervalo (75,100]" << endl;
    else
        cout << "Fora de intervalo" << endl;
    return 0;
}

