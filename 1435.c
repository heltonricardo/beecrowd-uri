#include <stdio.h>

int d(int n, int x, int y) {
    int m;
    m = (x+1 < y+1) ? x+1 : y+1;
    m = ( m  < n-x) ?  m  : n-x;
    m = ( m  < n-y) ?  m  : n-y;
    return m;
}

int main(void) {
    int n, i, j;

    while (scanf("%d", &n) && n != 0) {
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n; ++j) {
                printf("%3d", d(n, i, j));
                if (!(j == n-1)) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


