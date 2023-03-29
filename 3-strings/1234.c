#include <stdio.h>
#include <ctype.h>

int main(void) {
    char txt[55], *p, o, t;

    while (fgets(txt, 55, stdin)) {
        p = txt;
        o = 'g';
        while (*p != '\0') {
            if (*p == ' ')
                printf(" ");
            else if (o == 'g') {
                putchar(toupper(*p));
                o = 'p';
            }
            else {
                putchar(tolower(*p));
                o = 'g';
            }
            ++p;
        }
    }
    return 0;
}


