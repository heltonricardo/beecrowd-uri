#include <iostream>

using namespace std;

int main(void) {
    char x, y = '\0';
    while ((x = getchar()) != EOF) {
        x = (x == 'b' || x == 'j' || x == 'p' || x == 's' || x == 'v' || x == 'x' || x == 'z') ? 'f' : x;
        x = (x == 'B' || x == 'J' || x == 'P' || x == 'S' || x == 'V' || x == 'X' || x == 'Z') ? 'F' : x;
        if ((x != 'f' && x != 'F') || (y != 'f' && y != 'F')) cout << x;
        y = x;
    }
    return 0;
}

