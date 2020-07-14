#include <stdio.h>

int main(void) {
    int n, k, i, j, q, e, v[1000];
    while (scanf("%d %d", &n, &k) == 2 && (n != 0 || k != 0)) {
        for (i = 0; i < n; ++i) scanf("%d", &v[i]);
        q = 0;
        for (i = 1; i < 101; ++i) {
            e = 0;
            for (j = 0; j < n; ++j)
                if (i == v[j]) ++e;
            if (e >= k) ++q;
        }
        printf("%d\n", q);
    }
    return 0;
}


