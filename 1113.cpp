#include <iostream>

using namespace std;

int main(void) {
    int i, A, B;

    while (cin >> A >> B) {
        if (A == B) break;
        if (A > B) cout << "Decrescente" << endl;
        else cout << "Crescente" << endl;
    }
    return 0;
}
