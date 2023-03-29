#include <stdio.h>

int main(void) {
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a == b && b == c) printf("*\n");
        else if (b == c && a != c) printf("A\n");
        else if (a == c && b != c) printf("B\n");
        else printf("C\n");
    }
    return 0;
}


