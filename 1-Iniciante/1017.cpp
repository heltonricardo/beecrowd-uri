#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(3) << a * b / 12.0 << endl;
    return 0;
}

