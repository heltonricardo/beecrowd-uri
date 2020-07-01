#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d)) {
        if (a == 0 && b == 0 && c == 0 && d == 0) break;
        else if (a == c && b == d) printf("0\n");
        else if (a == c || b == d || abs(a-c) == abs(b-d)) printf("1\n");
        else printf("2\n");
    }
    return 0;
}


