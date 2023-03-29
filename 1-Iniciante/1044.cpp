#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0) cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;
    return 0;
}

