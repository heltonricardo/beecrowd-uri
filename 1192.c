#include <stdio.h>

int upper(char x) {
    int i;
    char m[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    for (i = 0; i < 26; ++i)
        if (x == m[i]) return 1;
    return 0;
}

int main(void) {
    int n, i, a, b;
    char e[4];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%s", &e);
        a = e[0] - '0';
        b = e[2] - '0';
        if (a == b)
            printf("%d\n", a * b);
        else if (upper(e[1]))
            printf("%d\n", b - a);
        else
            printf("%d\n", a + b);
    }
    return 0;
}

