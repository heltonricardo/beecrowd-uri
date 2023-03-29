#include <stdio.h>

int main(void) {
    int q, i, n;
    int lista[2000];

    for (i = 0; i < 2000; ++i)
        lista[i] = 0;

    scanf("%d", &q);
    for (i = 0; i < q; ++i) {
        scanf("%d", &n);
        ++lista[n-1];
    }

    for (i = 0; i < 2000; ++i)
        if (lista[i] != 0)
        printf("%d aparece %d vez(es)\n", i+1, lista[i]);
    return 0;
}
