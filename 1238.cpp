#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int qnt, i, j, k, l;
    char A[55], B[55], C[110];

    cin >> qnt;

    for (l = 0; l < qnt; ++l) {
        cin >> A >> B;

        for (i = 0, j = 0, k = 0; i < strlen(A) + strlen(B); ++i) {
            if (i % 2 == 0 && A[j] != '\0') C[i] = A[j++];
            else if (i % 2 != 0 && B[k] != '\0') C[i] = B[k++];
            else if (A[j] != '\0') C[i] = A[j++];
            else C[i] = B[k++];
        }
        C[i] = '\0';
        cout << C << endl;
    }
    return 0;
}
