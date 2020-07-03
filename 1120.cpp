#include <iostream>

using namespace std;

int main(void) {
    char a, b[102], c[102];
    char *pb, *pc;
    int t;
    bool n;

    while (cin >> a >> b) {
        pb = b;
        pc = c;
        t = 0;

        while (*pb++ != '\0') ++t;
        if (a == '0' && b[0] == '0' && t == 1) break;

        n = false;
        for (pb = b; *pb != '\0'; ++pb)
            if (*pb != a)
                if (*pb != '0') {
                    *pc++ = *pb;
                    n = true;
                }
                else if (n) *pc++ = '0';
        *pc = '\0';
        pc = c;
        t = 0;
        while (*pc++ != '\0') ++t;
        if (t == 0) {
            c[0] = '0';
            c[1] = '\0';
        }
        cout << c << endl;
    }
    return 0;
}

