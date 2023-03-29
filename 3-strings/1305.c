#include <stdio.h>

double dec(double f) {
    return f - (int)f;
}

int main(void) {
    double n, c;
    int r;
    while (scanf("%lf %lf", &n, &c) != EOF) {
        if (dec(n) < dec(c))
            r = n;
        else
            r = n + 1;
        printf("%d\n", r);
    }
    return 0;
}

