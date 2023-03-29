#include <stdio.h>

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        if (a == 0 && b == 0) break;
        printf("%d\n", 2 * a - b);
    }
    return 0;
}

