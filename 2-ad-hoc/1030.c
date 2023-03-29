#include <stdio.h>

int main(void) {
    int g, q, n, k, j, i, m, p;
    scanf("%d", &q);
    for (g = 0; g < q; ++g) {
        scanf("%d %d", &n, &k);
        char v[n];
        for (j = 0; j < n; ++j) v[j] = 1;
        m = 0;
        i = 1;
        p = 1;
        while (m < n-1) {
            if (v[i] == 1) ++p;
            if (p == k) {
                v[i] = 0;
                ++m;
                p = 0;
            }
            ++i;
            if (i == n) i = 0;
        }
        for (j = 0; v[j] == 0; ++j);
        printf("Case %d: %d\n", g+1, j+1);
    }
    return 0;
}
