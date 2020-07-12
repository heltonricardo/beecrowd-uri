#include <stdio.h>
#include <string.h>

int main(void) {
    int n, p, i, f;
    char c[1002];

    while (scanf("%d", &n) && n != 0) {
        getchar();
        scanf("%s", &c);
        p = 90;
        for (i = 0; i < strlen(c); ++i) {
            if (c[i] == ' ') continue;
            if (c[i] == 'D') p -= 90;
            else p += 90;
        }
        f = p % 360;
        if (f == 0) printf("L\n");
        else if (f == 90) printf("N\n");
        else if (f == 180) printf("O\n");
        else printf("S\n");
    }
    return 0;
}


