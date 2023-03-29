#include <stdio.h>

int main(void) {
    int q, i, t, n[1000], j, s, u;
    double m;

    scanf("%d", &q);

    for (i = 0; i < q; ++i) {
        scanf("%d", &t);
        s = 0;
        for (j = 0; j < t; ++j) {
            scanf("%d", &n[j]);
            s += n[j];
        }
        m = s / t;
        u = 0;
        for (j = 0; j < t; ++j)
            if (n[j] > m) ++u;
        printf("%.3lf%%\n", u * 100.0 / t);
    }
    return 0;
}
