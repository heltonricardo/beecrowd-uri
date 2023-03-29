#include <string.h>
#include <stdio.h>

int co(char *e) {
    int q = 0;
    if (*e++ == 'o') ++q;
    if (*e++ == 'n') ++q;
    if (*e   == 'e') ++q;
    return q;
}

int main(void) {
    int q, i;
    char e[7];

    scanf("%d", &q);
    getchar();
    for (i = 0; i < q; ++i) {
        scanf("%s", e);
        if (strlen(e) == 5) printf("3\n");
        else {
            if (co(e) > 1) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}

