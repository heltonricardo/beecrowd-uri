#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    int n, i, j, v, m, x;
    char t[10];

    while (scanf("%d", &n) == 1 && n) {
        x = pow(4, (n-1));
        sprintf(t, "%d", x);
        m = strlen(t);
        for (i = 0; i < n; ++i) {
            v = pow(2, i);
            for (j = 0; j < n; ++j) {
                printf("%*d", m, v);
                if (j != n-1) printf(" ");
                v *= 2;
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


