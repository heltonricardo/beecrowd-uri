#include <stdio.h>
#include <string.h>

int main(void) {
    int q, i, j, d;
    char a[1002], b[1002];
    int enc;

    scanf("%d", &q);
    getchar();
    for (i = 0; i < q; ++i) {
        scanf("%s %s", &a, &b);
        enc = 1;
        d = strlen(a) - strlen(b);
        if (d >= 0) {
            for (j = 0; j < strlen(b); ++j)
                if (a[j+d] != b[j])
                    enc = 0;
        }
        else enc = 0;
        if (enc) printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}

