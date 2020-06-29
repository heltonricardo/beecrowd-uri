#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A >= B && A >= C && B >= C)
        cout << C << endl << B << endl << A << endl;
    else if (A >= C && C >= B)
        cout << B << endl << C << endl << A << endl;
    else if (B >= A && A >= C)
        cout << C << endl << A << endl << B << endl;
    else if (B >= C && C >= A)
        cout << A << endl << C << endl << B << endl;
    else if (C >= A && A >= B)
        cout << B << endl << A << endl << C << endl;
    else if (C >= B && B >= A)
        cout << A << endl << B << endl << C << endl;

    cout << endl << A << endl << B << endl << C << endl;

    return 0;
}
