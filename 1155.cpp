#include <iomanip>
#include <iostream>

using namespace std;

double som(int n) {
    if (n == 1.0) return 1.0;
    return 1.0 / n + som(n - 1);
}

int main(void) {
    cout << fixed << setprecision(2) << som(100) << endl;
    return 0;
}

