#include <stdio.h>

int m(int a)
{
    return (a > 0) ? a : -a;
}
int main(void)
{
    int a = 0, b = 0, c = 0;
    int face = 0;
    scanf("%d %d %d", &a, &b, &c);
    face = (a > b && b <= c) ? 1 : face;
    face = (a < b && b >= c) ? 0 : face;
    face = (a < b && b < c && m(c - b) <  m(b - a)) ? 0 : face;
    face = (a < b && b < c && m(c - b) >= m(b - a)) ? 1 : face;
    face = (a > b && b > c && m(c - b) <  m(b - a)) ? 1 : face;
    face = (a > b && b > c && m(c - b) >= m(b - a)) ? 0 : face;
    if (a == b)
        if (b < c)
            face = 1;
        else
            face = 0;
    printf("%s\n", (face) ? ":)" : ":(");
    return 0;
}

