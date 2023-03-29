#include <stdio.h>
#include <string.h>

int fat2(int n, int par) {
    if (n == 0) return par;
    else return fat2(n-1, par * n);
}

int fat(int n) {
    return fat2(n, 1);
}

int main(void) {
    char e[7];
    int s, i;
    while (scanf("%s", e)) {
        if (e[0] == '0') break;
        s = 0;
        for (i = 0; i < strlen(e); ++i)
            s += ((int)(e[i]) - 48) * fat(strlen(e) - i);
        printf("%d\n", s);
    }
    return 0;
}
