#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    double a;
    double pi = 3.14159;
    cin >> a;
    cout << "A=" << fixed << setprecision(4) << a * a * pi << endl;
    return 0;
}
