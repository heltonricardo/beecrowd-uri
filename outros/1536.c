#include <stdio.h>

int main(void) {
    int q, p, a, b;
    int s1, s2, p1, p2, a1, a2;
    char lx;

    scanf("%d", &q);
    for (p = 0; p < q; ++p) {
        s1 = s2 = p1 = p2 = a1 = a2 = 0;
        scanf("%d %c %d", &a, &lx, &b);
        a2 = a;
        s1 += a;
        s2 += b;
        if (a > b) p1 += 3;
        else if (b > a) p2 += 3;
        else {
            ++p1;
            ++p2;
        }
        scanf("%d %c %d", &b, &lx, &a);
        a1 = b;
        s1 += a;
        s2 += b;
        if (a > b) p1 += 3;
        else if (b > a) p2 += 3;
        else {
            ++p1;
            ++p2;
        }
        if (p1 > p2) printf("Time 1\n");
        else if (p2 > p1) printf("Time 2\n");
        else {
            if (s1 - s2 > s2 - s1) printf("Time 1\n");
            else if (s2 - s1 > s1 - s2) printf("Time 2\n");
            else {
                if (a1 > a2) printf("Time 1\n");
                else if (a2 > a1) printf("Time 2\n");
                else printf("Penaltis\n");
            }
        }
    }
    return 0;
}
