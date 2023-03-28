#include <stdio.h>

int main(void) {
    int n, i, j, qt, s, d, m, ind;

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d %d", &qt, &s);
        d = ind = 999;
        for (j = 0; j < qt; ++j) {
            scanf("%d", &m);
            if (d > abs(s - m)) {
                d = abs(s - m);
                ind = j;
            }
        }
        printf("%d\n", ind + 1);
    }
    return 0;
}

