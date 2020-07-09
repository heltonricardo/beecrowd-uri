#include <stdio.h>
#include <string.h>

int main(void) {
    int q, i, t, j;
    char e[105];

    scanf("%d", &q);
    getchar();
    for (i = 0; i < q; ++i) {
        gets(e);
        t = strlen(e) / 2 - 1;
        for (j = t; j >= 0; --j)
            printf("%c", e[j]);
        for (j = strlen(e) - 1; j > t; --j)
            printf("%c", e[j]);
        printf("\n");
    }
    return 0;
}
