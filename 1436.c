#include <stdio.h>

int main(void) {
    int q, j, i, n, m, x;
    scanf("%d", &q);
    for (j = 0; j < q; ++j) {
        scanf("%d", &m);
        for (i = 0; i < m; ++i) {
            scanf("%d", &x);
            if (i == (int)(m / 2))
                printf("Case %d: %d\n", j+1, x);
        }
    }
    return 0;
}


