#include <stdio.h>

int main(void) {
    int n;
    while (scanf("%d", &n) == 1)
        if (n % 6 == 0) printf("Y\n");
        else printf("N\n");
    return 0;
}
