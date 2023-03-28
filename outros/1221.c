#include <stdio.h>
#include <math.h>

int main(void) {
    int i, q, j, p;
    long long n, li;
    scanf("%d", &q);
    for (i = 0; i < q; ++i) {
        scanf("%lli", &n);
        p = (n != 0) ? 1 : 0;
        li = sqrt(n) + 2.0;
        for (j = 2; j < li; ++j)
            if (n % j == 0) {
                p = 0;
                break;
            }
        if (p || n == 2) printf("Prime\n");
        else printf("Not Prime\n");
    }
    return 0;
}
