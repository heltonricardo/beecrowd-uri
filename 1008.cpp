#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    char nome;
    double sal, ven;
    cin >> nome; cin.ignore(80, '\n');
    cin >> sal >> ven;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << sal + ven * 0.15 << endl;
    return 0;
}
