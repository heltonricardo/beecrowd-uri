#include <stdio.h>

int main(void) {
    int q, i, a, b, x, y;
    while (scanf("%d", &q) && q != 0) {
        a = b = 0;
        for (i = 0; i < q; ++i) {
            scanf("%d %d", &x, &y);
            if (x > y) ++a;
            else if (y > x) ++b;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}


