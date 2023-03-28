#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    unsigned long long int a, b;
    while (cin >> a >> b) cout << setprecision(30) << (a^b) << endl;
    return 0;
}
