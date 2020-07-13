#include <stdio.h>

int main(void) {
    int n, m, i, j;

    while (scanf("%d", &n) == 1) {
        m = n-1;
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                if (i+j == m) printf("2");
                else if (i == j) printf("1");
                else printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}


