#include <iostream>
#include <cctype>
#include <locale>

using namespace std;

int main(void) {
    char txt[55], *p, o;
    locale loc;
    while (cin.getline(txt, 55)) {
        p = txt;
        o = 'g';
        while (*p != '\0') {
            if (*p == ' ')
                cout << ' ';
            else if (o == 'g') {
                cout << toupper(*p, loc);
                o = 'p';
            }
            else {
                cout << tolower(*p, loc);
                o = 'g';
            }
            ++p;
        }
        cout << endl;
    }
    return 0;
}

