#include <stdio.h>
#include <math.h>

int main(void) {
    int n, i, x, y, r, b, c;

    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d %d", &x, &y);
        r = pow((3 * x), 2) + pow(y, 2);
        b = 2 * pow(x, 2) + pow((5 * y), 2);
        c = -100 * x + pow(y, 3);
        if (r > b) {
            if (r > c) printf("Rafael ganhou\n");
            else printf("Carlos ganhou\n");
        }
        else {
            if (b > c) printf("Beto ganhou\n");
            else printf("Carlos ganhou\n");
        }
    }
    return 0;
}


