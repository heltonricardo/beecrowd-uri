#include <stdio.h>

int main(void) {
    int n, r, i, x, q;
    int v[1000];

    while (scanf("%d %d", &n, &r) == 2) {
        for (i = 0; i < n; ++i)
            v[i] = i+1;
        for (i = 0; i < r; ++i) {
            scanf("%d", &x);
            v[x-1] = 0;
        }
        q = 0;
        for (i = 0; i < n; ++i)
            if (v[i] != 0) {
                ++q;
                printf("%d ", v[i]);
            }
        if (q == 0) printf("*");
        printf("\n");
    }
    return 0;
}


